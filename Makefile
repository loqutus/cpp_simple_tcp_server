SRCS=1.cpp
LDFLAGS=-lstdc++ -lboost_system
CXXFLAGS=-I/usr/local/include -L/usr/local/lib -std=c++11
PROG=1
CPP=clang
all: 1
clean:
	rm -f ${PROG}
