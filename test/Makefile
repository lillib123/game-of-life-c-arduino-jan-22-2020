PROGNAME=fizzbuzz-test
OBJS=$(patsubst %.c, %.o, $(wildcard *.c))

CFLAGS=-I../src -I../unity -std=c99
VPATH=../src

LIBS=-L../unity -lunity
SUT=fizzbuzz.o

all: $(PROGNAME)
	./$(PROGNAME)

$(PROGNAME): $(OBJS) $(SUT)
	$(CC) -o $@ $^ $(LIBS)

clean:
	rm -f *.o
	rm -f $(PROGNAME)