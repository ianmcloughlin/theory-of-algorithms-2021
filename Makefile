# This is my Makefile.

EXECS=args bitoperations endian funcs preproc sha256

sha256: sha256.c
	cc -o sha256 sha256.c

test: tests.sh
	./tests.sh

clean:
	rm -f $(EXECS)