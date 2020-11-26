ifeq (1, $(MAKELEVEL))
test:
	echo $(shell pwd)
	echo $(shell whoami)
	echo $(shell arch)
	echo $(MAKELEVEL)
endif

test1:
	echo "this is an intended line for else branch."
	echo "A$(nullstring)A"
	echo "A$(space)A"

nullstring :=
space := $(nullstring) # Comment sign caused the space.

test2:
	echo $$, aaaa

