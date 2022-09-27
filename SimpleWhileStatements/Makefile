all: sws

main.o: main.c
	gcc -c main.c

sws: main.o
	gcc main.o -o sws


.PHONY: clean

clean:
	rm -rf *.o sws