
objects = main.o kdb.o command.o display.o insert.o search.o files.o utils.o

# Example on Makefile
edit.out: $(objects)
	cc -o edit.out $(objects)

$(objects): defs.h

kdb.o command.o files.o: command.h
display.o insert.o search.o files.o: buffer.h

.PHONY: clean
clean:
	rm edit.out main.o kdb.o command.o display.o insert.o search.o files.o utils.o
