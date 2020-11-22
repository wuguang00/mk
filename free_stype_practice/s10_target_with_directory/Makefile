.PHONY: test/t.txt
override SHELL = /bin/sh
test/t.txt: a
	echo $@
	echo "This is a target with the directory."
	echo $(origin V)
	echo $(origin @)
	echo $(origin SHELL)
	echo $(MAKE)
