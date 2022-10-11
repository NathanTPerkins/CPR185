all: img

./build/img.o: main.c
	gcc -c main.c -o ./build/img.o

img: ./build/img.o
	gcc ./build/img.o -o img

.PHONY: clean

clean:
	rm -rf ./build/* img