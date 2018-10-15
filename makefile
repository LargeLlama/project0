all: driver.o node.o
	gcc -o library.out driver.o node.o

driver.o: driver.c node.h
	gcc -c driver.c

node.o: node.c node.h
	gcc -c node.c

clean:
	rm *.o*

run:
	./library.out
