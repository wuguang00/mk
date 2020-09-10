# VPATH = dirtemp:dirtemp2 # VPATH is used for finding the target and the prerequist. If return without one value, it will report for another.
# use VPATH to support what I want to use for practicing.
objects := $(wildcard *.cpp)
objects2 := $(wildcard *.txt)
cc = gcc
prom = calc
src = main.c getopt.c stack.c

# the vpath is a keyword for makefile.
vpath %.txt ./dirtemp2
vpath %     ./dirtemp2
vpath %.s   ./dirtemp2

$(prom): $(src)
	$(cc) -o $(prom) $(src)

showall: stbad.txt
	echo $(objects) # it will extend all the files with suffix .cpp
	echo $(VPATH)
	echo $(objects2) # it will extend all the files with suffix .cpp

.PHONY: clean

clean:
	-rm -rf *.out
	@rm -rf *.out # with out show this line.
	@echo "Does it work as normal."
	rm -rf *.out
	echo "Random data"
	@echo $$$$

# use -MM for GNU C++ compilation.

