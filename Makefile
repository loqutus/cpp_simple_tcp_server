SRCS=server.cpp
LDFLAGS=-lstdc++ -lboost_system
CXXFLAGS=-I/usr/local/include -L/usr/local/lib -std=c++11
PROG=server
CPP=clang
all: server
clean:
	rm -f ${PROG}
