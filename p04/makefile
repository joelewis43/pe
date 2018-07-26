CXX = g++
CXXFLAGS = -Wall -g

p4: p4.o eq.o
	$(CXX) $(CXXFLAGS) -o p4 p4.o eq.o

p4.o: p4.cpp eq.h

eq.o: eq.h
