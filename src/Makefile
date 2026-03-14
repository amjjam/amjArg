ifndef prefix
  prefix=/op/amj
endif

CPPFLAGS=-Wall -g -fPIC
CPP=g++

AMJARG_SRC=amjArg.C
AMJARG_OBJ=$(AMJARG_SRC:.C=.o)

build: libamjArg.so

libamjArg.so: $(AMJARG_OBJ)
	$(CPP) -shared -Wl,-soname,$@ -o $@ $^

install:
	mkdir -p $(prefix)/lib
	mkdir -p $(prefix)/include
	cp libamjArg.so $(prefix)/lib
	cp ../include/amjArg.H $(prefix)/include

uninstall:
	- $(prefix)/lib/libamjArg.so $(prefix)/include/amjArg.H

clean:
	- rm -f libamjArg.so $(AMJARG_OBJ)
