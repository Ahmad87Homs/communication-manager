#fetch ubuntu image 

FROM ubuntu:22.04

#install python on image 

RUN \
apt update && \
apt install -y build-essential  && \
apt install -y git && \
apt install -y cmake && \
apt install -y python3 && \
apt install -y pip 

#create a directory for our tests 

RUN mkdir /tests

#copy in our python script 

#COPY test.py /tests/test.py

#command that will be invoke when container starts

