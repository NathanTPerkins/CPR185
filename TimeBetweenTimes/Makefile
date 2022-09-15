
all: td

td: timediff.o
	gcc timediff.o -o td

timediff.o: timediff.c
	gcc -c timediff.c

.PHONY: clean

clean:
	rm *.o td