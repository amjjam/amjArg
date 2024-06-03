CPPFLAGS=-Wall -g -fPIC -std=c++11
CPP=g++

AMJARG_SRC=amjArg.C
AMJARG_OBJ=$(AMJARG_SRC:.C=.o)

build: libamjArg.so

libamjArg.so: $(AMJARG_OBJ)
	$(CPP) -shared -Wl,-soname,$@ -o $@ $^

install:
	mkdir -p /opt/amj/lib
	mkdir -p /opt/amj/include
	cp libamjArg.so /opt/amj/lib
	cp ../include/amjArg.H /opt/amj/include

uninstall:
	- /opt/amj/lib/libamjArg.so /opt/amj/include/amjArg.H

clean:
	- rm -f libamjArg.so $(AMJARG_OBJ)
