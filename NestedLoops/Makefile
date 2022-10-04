all: nl

./build/main.o: main.c
	gcc -c main.c -o ./build/main.o

nl: ./build/main.o
	gcc ./build/main.o -o nl

.PHONY: clean

clean:
	rm -rf ./build/* nl