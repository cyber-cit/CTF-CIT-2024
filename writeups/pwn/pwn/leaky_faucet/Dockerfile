FROM archlinux@sha256:1f83ba0580a15cd6ad1d02d62ad432ddc940f53f07d0e39c8982d6c9c74e53e0 AS app

FROM redpwn/jail
COPY --from=app / /srv
RUN mkdir /srv/app
COPY bin/leaky_faucet /srv/app/run
COPY bin/flag.txt /srv/app/flag.txt
ENV JAIL_MEM=20M JAIL_CPU=50 JAIL_CONNS_PER_IP=3 JAIL_TIME=30
