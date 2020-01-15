PROGNAME=fizzbuzz
OBJS=$(patsubst %.c, %.o, $(wildcard *.c))

CFLAGS=-std=c99

$(PROGNAME): $(OBJS)
	$(CC) -o $@ $^

clean:
	rm -f *.o
	rm -f $(PROGNAME)
