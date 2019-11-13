all: Program_1 

Program_1: Program_1.cpp P1Class.o
	g++ --std=c++11 Program_1.cpp P1Class.o -o Program_1

P1class.o: P1class.h P1Class.cpp
	g++ --std=c++11 P1Class.cpp -c -o P1Class.o
