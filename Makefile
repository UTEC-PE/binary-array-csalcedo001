CXX = g++
CXXFLAGS = -std=c++14
HEADS = binary.h
SRC = main.cpp

all: run

main: $(SRC) $(HEADS)
	$(CXX) $(CXXFLAGS) $< -o $@

run: main
	./main
