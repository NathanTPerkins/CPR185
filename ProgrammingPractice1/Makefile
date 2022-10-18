
all: p1 final_exe

./build/p1.o: src/main.c
	gcc -c src/main.c -o ./build/p1.o

p1: ./build/p1.o
	gcc ./build/p1.o -o p1

./build/final.o: Perkins_Nathan_PP_1.c
	gcc -c Perkins_Nathan_PP_1.c -o ./build/final.o

final_exe: ./build/final.o
	gcc ./build/final.o -o final_exe

.PHONY: clean

clean:
	rm ./build/* p1 final_exe