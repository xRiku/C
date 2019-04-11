all: comp clean exec

exec:
	./loja

comp: loja.o lab3.o
	gcc -o loja loja.o lab3.o 

loja.o: loja.c loja.h
	gcc -c loja.c

lab3.o: lab3.c loja.h
	gcc -c lab3.c 
clean:
	rm -f *.o