
all: tower tower2

tower: tower.o
	gcc tower.o -o tower

tower.o: tower.c
	gcc tower.c -c

tower2: tower2.o
	gcc tower2.o -o tower2

tower2.o: tower2.c
	gcc tower2.c -c


.PHONY: clean

clean:
	rm *.o tower tower2