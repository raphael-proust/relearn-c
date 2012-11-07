TARGETS= \
	helloworld.out

all:V: $TARGETS

%.o: %.c
	cc $CCFLAGS -c $stem.c

%.out: %.o
	cc $stem.o -o $stem.out

clean:V:
	rm -f *.o

purge:V: clean
	rm -f $TARGETS
