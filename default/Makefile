ifeq ($(.DEFAULT_GOAL),)
    $(warning no default goal is set) # space used at the start of this line. if tab used it will report an error.
endif

.PHONY: foo
foo: ; @echo $@ # this is an example for show the .DEFAULT_GOAL
# After this cluase the default goal has been set. Set automatically.


$(warning no default goal is $(.DEFAULT_GOAL)) # space used at the start of this line. if tab used it will report an error.
# reset the default goal
.DEFAULT_GOAL := 


.PHONY: bar
bar: ; @echo $@

$(warning no default goal is $(.DEFAULT_GOAL))

# A apecial usage of the defaut goal
.DEFAULT_GOAL := 

a:
	echo "the first one."

$(warning no default goal is $(.DEFAULT_GOAL)) # space used at the start of this line. if tab used it will report an error.
all:
	echo "target: all"
# Set you own target.

$(warning no default goal is $(.DEFAULT_GOAL)) # space used at the start of this line. if tab used it will report an error.
.DEFAULT_GOAL := 

all1:
	echo "target: all1111"

.DEFAULT_GOAL := all1
$(warning no default goal is $(.DEFAULT_GOAL)) # space used at the start of this line. if tab used it will report an error.
# the last default value for make file.
