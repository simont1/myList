all: clas.o driver.o
	gcc clas.o
	gcc driver.o
clas.o:
	gcc -c clas.c
driver.o:
	gcc -c driver.c
