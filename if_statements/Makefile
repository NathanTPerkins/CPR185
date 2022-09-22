all: ifc

ifc:if.o
	gcc if.o -o ifc

if.o: if.c
	gcc -c if.c

.PHONY: clean

clean:
	rm -rf *.o ifc