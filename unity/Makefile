PROGNAME=libunity.a
OBJS=$(patsubst %.c, %.o, $(wildcard *.c))

$(PROGNAME): $(OBJS)
	$(AR) -rs $@ $^

clean:
	rm -f $(PROGNAME)
	rm -f *.o