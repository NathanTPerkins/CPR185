
all: ./build/p1

./build/p1.o: main.c
	gcc -c main.c -o ./build/p1.o

./build/p1: ./build/p1.o
	gcc ./build/p1.o -o ./build/p1

.PHONY: clean

clean:
	rm ./build/*