TARGETS= \
	helloworld.out \
	family.out \
	wrong.out \
	right.out \
	structure.out \
	basetypes.out \
	simplemath.out \
	simpleargv.out \
	sizes.out

all:V: $TARGETS

CCFLAGS="-Wall -g"

%.o: %.c
	cc $CCFLAGS -c $stem.c

%.out: %.o
	cc $stem.o -o $stem.out

clean:V:
	rm -f *.o

purge:V: clean
	rm -f $TARGETS
