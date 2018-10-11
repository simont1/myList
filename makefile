all: driver.o clas.o
	gcc driver.o clas.o
driver.o: driver.c funcs.h
	gcc -c driver.c

clas.o: clas.c funcs.h
	gcc -c clas.c

run:
	./a.out

clean:
	rm out
	rm *.o
