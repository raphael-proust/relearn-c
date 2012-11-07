TARGETS= \
	helloworld.out

all:V: $TARGETS

%.o: %.c
	cc $CCFLAGS -c $stem.c

%.out: %.o
	cc $stem.o -o $stem.out

clean:V:
	rm *.o $TARGETS
