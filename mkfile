TARGETS= \
	helloworld.out \
	family.out

all:V: $TARGETS

CCFLAGS="-Wall"

%.o: %.c
	cc $CCFLAGS -c $stem.c

%.out: %.o
	cc $stem.o -o $stem.out

clean:V:
	rm -f *.o

purge:V: clean
	rm -f $TARGETS
