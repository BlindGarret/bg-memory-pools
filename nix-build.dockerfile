FROM gcc:10.2
ENV GOOGLE_TEST_SRC_DIR=/usr/googletest
ENV TZ=America/New_York
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone
RUN apt-get update
RUN apt-get install -y cmake
WORKDIR /usr
RUN git clone https://github.com/google/googletest.git -b release-1.10.0 
WORKDIR /usr/proj