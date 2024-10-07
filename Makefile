CC = gcc
CFLAGS = -Wall -Wextra

all: morpion

morpion: main.o
	$(CC) $(CFLAGS) -o morpion main.o

main.o: main.c tic-tac-toe.h
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f *.o morpion
