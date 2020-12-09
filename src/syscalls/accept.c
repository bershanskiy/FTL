/* Pi-hole: A black hole for Internet advertisements
*  (c) 2020 Pi-hole, LLC (https://pi-hole.net)
*  Network-wide ad blocking via your own hardware.
*
*  FTL Engine
*  Pi-hole syscall implementation for accept
*
*  This file is copyright under the latest version of the EUPL.
*  Please see LICENSE file for your rights under this license. */

#include "../FTL.h"
//#include "syscalls.h" is implicitly done in FTL.h
#include "../log.h"

int FTLaccept(int sockfd, struct sockaddr *addr, socklen_t *addrlen, const char * file, const char * function, const int line)
{
    int ret = 0;
	do
	{
		// Reset errno before trying to write
		errno = 0;
		ret = accept(sockfd, addr, addrlen);
	}
	// Try again if the last accept() call failed due to an interruption by an
	// incoming signal
	while(ret < 0 && errno == EINTR);

	// Final error checking (may have faild for some other reason then an
	// EINTR = interrupted system call)
	if(ret < 0)
		logg("WARN: Could not accept() in %s() (%s:%i): %s",
             function, file, line, strerror(errno));

    return ret;
}