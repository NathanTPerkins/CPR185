FROM ubuntu:latest

RUN apt update && apt install gcc -y && apt install cmake -y && apt install shc && apt install g++ -y
WORKDIR /usr/local/src/CPR185

COPY . .

ENV HOME="/usr/local/src/CPR185"
#ENV PATH=""
