all: motion

./build/motion.o: motion.c
	gcc -c motion.c -o ./build/motion.o

motion: ./build/motion.o
	gcc ./build/motion.o -o motion

.PHONY: clean

clean:
	rm -rf ./build/* motion