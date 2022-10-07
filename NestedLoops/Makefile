all: nl nl2

./build/main.o: main.c
	gcc -c main.c -o ./build/main.o

nl: ./build/main.o
	gcc ./build/main.o -o nl

./build/main2.o: main2.c
	gcc -c main2.c -o ./build/main2.o

nl2: ./build/main2.o
	gcc ./build/main2.o -o nl2

.PHONY: clean

clean:
	rm -rf ./build/* nl nl2