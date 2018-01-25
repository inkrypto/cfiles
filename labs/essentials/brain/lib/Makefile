CXXFLAGS= -std=c++11 -Wall -pedantic

CXXC=g++

all: matrix.o

test: matrix.o 
	$(CXXC) $(CXXFLAGS) matrix.o testmatrix.cpp -o testmatrix 

matrix.o:
	$(CXXC) $(CXXFLAGS) -c matrix.cpp -o matrix.o

clean:
	rm -f testmatrix matrix.o
