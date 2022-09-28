
all: ./build/p1

./build/p1.o: src/main.c
	gcc -c src/main.c -o ./build/p1.o

./build/p1: ./build/p1.o
	gcc ./build/p1.o -o ./build/p1

.PHONY: clean

clean:
	rm ./build/*