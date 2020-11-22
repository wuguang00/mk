
foo.o: foo.c defs.h
	cc -c -g foo.c -o foo.o
exe: foo.o
	cc foo.o -o foo.out
clean:
	-rm -rf *.o *.out

print: *.c
	echo $?
	cat $?
	touch print
