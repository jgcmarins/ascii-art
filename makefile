
# compiler name
CPP=g++

# flags
F=-Wall -std=c++14

# binary
BIN=./build/ascii-art.app

# main
MAIN=./src/main.cpp

# headers
H=./src/headers

# library
LIB=

all: clean compile
clean:
	rm -rf build
	mkdir	build
compile:
	$(CPP) $(F) -o $(BIN) -I$(H) $(MAIN) $(LIB)
run:
	$(BIN)
valgrind:
	valgrind $(BIN)
