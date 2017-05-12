all: main
hello.o: hello.c hello.h
	gcc -o hello.o -c hello.c
main: main.c hello.o
	gcc -o main main.c hello.o
