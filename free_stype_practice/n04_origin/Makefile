

# You can use make -e to check the status
VVVV  := 67
VVVV1 := 77
VVVV2 := 88

override define foo 
echo bar
echo bar1
echo bar2
endef

override DDDD = 2

test:
	echo $(origin VVVV)
	echo $(origin VVVV1)
	echo $(origin VVVV2)
	echo $(origin CC)
	echo $(origin foo)
	echo $(origin bar)
	echo $(origin bar1)
	echo $(origin bar2)
	echo $(origin DDDD)
	echo $(VVVV)
	echo "Test will be done."
	$(foo)
	echo $(VVVV3)

VVVV3 := 78

ifeq ($(BBBB), )
	VVVV3 = 66
endif
