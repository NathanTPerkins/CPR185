all: array_practice

main.o: main.c
	gcc -c $< -o $@

array_practice: main.o
	gcc -o $@ $<

.PHONY: clean

clean:
	rm *.o array_practice
