#Makefile for "IM_model" C++ Application
#Created by Anurag P. Bhale 08/12/2018

PROG = bode
CC = g++
CPPFLAGS = -std=c++17
OBJS = Source.o bode.o plotting.o


$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)
Source.o: Source.cpp
	$(CC) $(CPPFLAGS) -c Source.cpp
bode.o: bode.cpp bode.h
	$(CC) $(CPPFLAGS) -c bode.cpp
plotting.o: plotting.cpp plotting.h
	$(CC) $(CPPFLAGS) -c plotting.cpp
clean:
	rm -f core $(PROG) $(OBJS)
