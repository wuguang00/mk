CONFIG_SHELL := $(shell if [ -x "$$BASH" ]; then echo $$BASH; \
	  else if [ -x /bin/bash ]; then echo /bin/bash; \
	  else echo sh; fi ; fi)
all:
	echo $(CONFIG_SHELL)

# write the clause in one line
SHELL_LINE := $(shell if [ -x "$$BASH" ]; then echo $$BASH; else if [ -x /bin/bash ]; then echo /bin/bash; else echo sh; fi ; fi)

# You can try the function of call.
# Call used for create an expression wihch can be used for the funciton you can create yourself.
if_changed_rule = "date; echo $(1)"
allt:
	echo $(SHELL_LINE)
	echo $(call if_changed_rule,hvep) # the return should be can executealbe.
