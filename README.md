<p align="center">
<a href="https://pi-hole.net"><img src="https://pi-hole.github.io/graphics/Vortex/Vortex_with_text.png" width="80" alt="Pi-hole"></a>
<br/>
<b>Network-wide ad blocking via your own Linux hardware</b><br/><br/>
<a href="https://pi-hole.net"><img src="https://pi-hole.github.io/graphics/FTLDNS.svg" width="550" alt="FTLDNS"></a><br/>
</p>

FTLDNS(https://pi-hole.net/trademark-rules-and-brand-guidelines/) (`pihole-FTL`) provides an interactive API and also generates statistics for Pi-hole[®](https://pi-hole.net/trademark-rules-and-brand-guidelines/)'s Web interface.

- **Fast**: stats are read directly from memory by coupling our codebase closely with `dnsmasq`
- **Versatile**: upstream changes to `dnsmasq` can quickly be merged in without much conflict
- **Lightweight**: runs smoothly with [minimal hardware and software requirements](https://discourse.pi-hole.net/t/hardware-software-requirements/273) such as Raspberry Pi Zero
- **Interactive**: our API can be used to interface with your projects
- **Insightful**: stats normally reserved inside of `dnsmasq` are made available so you can see what's really happening on your network


# Official documentation

The official *FTL*DNS documentation can be found [here](https://docs.pi-hole.net/ftldns/).

# Installation

FTLDNS (`pihole-FTL`) is installed by default when you choose to enable the Web interface when installing Pi-hole.

> IMPORTANT!

>FTLDNS will _disable_ any existing installations of `dnsmasq`.  This is because FTLDNS _is_ `dnsmasq` + Pi-hole's code, so both cannot run simultaneously.
