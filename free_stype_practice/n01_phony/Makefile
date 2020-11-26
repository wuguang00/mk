.PHONY: test/t.txt

override SHELL = /bin/bash

test/t.txt: test2
	@echo $@
	@echo "This is a target with the directory."
	@echo $(origin V)
	@echo $(origin @)
	@echo $(origin SHELL)
	@echo $(MAKE)


test1:
	@echo "1: test for multi-target."

test2:
	@echo "2: test for multi-target."


test/t.txt: test1
	echo $@
	@echo "This is a target with the directory."
	@echo $(origin V)



