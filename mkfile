TARGETS=\
	arraysassign.out\
	basetypes.out\
	family.out\
	helloworld.out\
	l33t.out\
	multidimarrays.out\
	nastyecho.out\
	newlineecho.out\
	right.out\
	simpleargv.out\
	simplemath.out\
	sizes.out\
	structure.out\
	wrong.out

all:V: $TARGETS

CCFLAGS="-Wall -g"

%.o: %.c
	cc $CCFLAGS -c $prereq

%.out: %.o
	cc $prereq -o $target

clean:V:
	rm -f *.o

purge:V: clean
	rm -f $TARGETS
