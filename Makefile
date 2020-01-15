.PHONY: all src test unity clean

all: test src

src: test
	$(MAKE) -C src

test: unity
	$(MAKE) -C test

unity:
	$(MAKE) -C unity

clean:
	$(MAKE) -C src clean
	$(MAKE) -C test clean
