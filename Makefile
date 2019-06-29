CC=gcc
CFLAGS=-g -O0 -no-pie -z execstack -fno-stack-protector -D_FORTIFY_SOURCE=0

SOURCES=$(wildcard *.c)
EXECUTABLES=$(SOURCES:%.c=%)

all: $(EXECUTABLES)
	rm -rf *.dSYM
	
clean:
	rm -rf $(EXECUTABLES) *.dSYM
