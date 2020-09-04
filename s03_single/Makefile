# can you distinguish the codes below.
# I should try it myself.

x := foo # just can use the variable before. for variable.
y := $(x) bar
x := later

all:
	echo $(x) # x will be later.
	echo $(y) # y will be foo bar


m := $(n) moon
n := noon

allt:
	echo $(m) # four character, the first one is space
	echo $(n)

ifeq (0, ${MAKELEVEL})
	cur-dir   := $(shell pwd)
	whoami    := $(shell whoami)
	host-type := $(shell arch)
	MAKE := ${MAKE} host-type=${host-type} whoami=${whoami}
endif

allin:
	@echo $(MAKECMDGOALS) # the targets from command line. but not conatain the variable.
	echo $(whoami)
	echo $(MAKE)
	echo ${MAKE}
	echo ${MAKELEVEL}

# contain a string.
nullstring :=
space := $(nullstring) # end of the line
dir := /foo/bar   # directory to put the frobs in

FOO ?= bar
ifeq ($(origin FOO1), undefined)
	FOO1 = bar1 # this one is 
endif
FOO1 ?= bar1


no-dot-config-targets := clean mrproper distclean cscope TAGS tags help %docs check% include/target/version.h headers_% kernelrelease kernelversion

config-targets := 0
mixed-targets  := 0
dot-config     := 1

ifneq ($(filter $(no-dot-config-targets), $(MAKECMDGOALS)),)
	ifeq ($(filter-out $(no-dot-config-targets), $(MAKECMDGOALS)),)
		dot-config := 0
	endif
endif

ifneq ($(filter config %config,$(MAKECMDGOALS)),)
        config-targets := 1
        ifneq ($(filter-out config %config,$(MAKECMDGOALS)),)
                mixed-targets := 1
        endif
endif

allinall:
	@echo $(MAKECMDGOALS)
	@echo $(no-dot-config-targets) # % show as a special character.
	@echo $(dot-config)
	@echo $(config-targets)
	@echo $(FOO)"B"
	@echo $(FOO1)"A"

PHONY += FORCE

FORCE:

%:: FORCE
	echo "S" $(MAKE)



