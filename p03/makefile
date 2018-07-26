

#makefile for p3

# variables for compiling c++, all warnings flad, debugging flag
CXX = g++
CXXFLAGS = -Wall -g

#targets - files that must be generated
#first target is the one that is created when you type 'make'

#first line is target: dependencies
#second line is the compile command

#variable names must be lead with $ and enclosed in ()

p3: p3.o eq.o
	$(CXX) $(CXXFLAGS) -o p3 p3.o eq.o

p3.o: p3.cpp eq.h

eq.o: eq.h
