FROM ubuntu:latest

RUN apt update && apt install gcc -y && apt install cmake -y && apt install shc && apt install g++ -y && apt install shc
WORKDIR /usr/local/src/CPR185

COPY . .

ENV HOME="/usr/local/src/"
ENV PATH="/usr/local/src/CPR185/bash/bin:$PATH"

RUN shc -f ~/CPR185/bash/cnl.sh -o ~/CPR185/bash/bin/cnl
