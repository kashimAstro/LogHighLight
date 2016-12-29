CC=g++
CFLAGS=-Wall -std=c++11
BIN=main

all:
	$(CC) $(CFLAGS) -o $(BIN) main.cpp 
