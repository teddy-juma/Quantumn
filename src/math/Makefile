CC = g++ 
CFLAGS = -g -Wall -v

default: main

main: main.o vector3.o
	$(CC) $(CFLAGS) main.o vector3.o -o main

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp 

vector3.o: vector3.h vector3.cpp
	$(CC) $(CFLAGS) -c vector3.cpp

clean:
	rm main *.o 
