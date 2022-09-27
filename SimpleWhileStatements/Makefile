all: sws sws2

./build/main.o: main.c
	gcc -c main.c -o ./build/main.o

sws: ./build/main.o
	gcc ./build/main.o -o sws

./build/main2.o: main2.c
	gcc -c main2.c -o ./build/main2.o

sws2: ./build/main2.o
	gcc ./build/main2.o -o sws2


.PHONY: clean

clean:
	rm -rf build/*.o *.o sws sws2