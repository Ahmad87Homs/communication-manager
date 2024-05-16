#fetch ubuntu image 

FROM ubuntu:22.04

#install python on image 

RUN \
apt-get update && \
apt-get install -y build-essential  && \
apt-get install -y git && \
apt-get install -y cmake && \
apt-get install -y python3 


#create a directory for our tests 

RUN mkdir /tests

#copy in our python script 

#COPY test.py /tests/test.py

#command that will be invoke when container starts

