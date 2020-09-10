
objects = main.o kdb.o command.o display.o insert.o search.o files.o utils.o
# Example on Makefile
edit: $(objects)
	cc -o edit $(objects)

mian.o: defs.h
kdb.o: kdb.c defs.h command.h
command.o: defs.h command.h
display.o: defs.h buffer.h
insert.o: defs.h buffer.h
search.o: defs.h buffer.h
files.o: defs.h buffer.h command.h
utils.o: defs.h

.PHONY: clean
clean:
	rm edit main.o kdb.o command.o display.o insert.o search.o files.o utils.o
