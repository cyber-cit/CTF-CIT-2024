#FROM minidocks/glibc@sha256:bd430d7e488c5b1f4f48d14a38973b26463a5cea1467b4ff2926a3f28ebb99e7 AS app
FROM archlinux@sha256:1f83ba0580a15cd6ad1d02d62ad432ddc940f53f07d0e39c8982d6c9c74e53e0 AS app

FROM redpwn/jail
COPY --from=app / /srv
RUN mkdir /srv/app
COPY bin/THE_LAKE /srv/app/run
COPY bin/flag.txt /srv/app/flag.txt
ENV JAIL_MEM=20M JAIL_CPU=50 JAIL_CONNS_PER_IP=3 JAIL_TIME=30 JAIL_POW=5000
