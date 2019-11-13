all: Program_1

Program_1: Program_1.cpp Package.o OvernightPackage.o 
	g++ --std=c++11 Program_1.cpp Package.o OvernightPackage.o  -o Program_1


Package.o: Package.h Package.cpp
	g++ --std=c++11 Package.cpp -c -o Package.o

OvernightPackage.o: OvernightPackage.h OvernightPackage.cpp
	g++ --std=c++11 OvernightPackage.cpp -c -o OvernightPackage.o


