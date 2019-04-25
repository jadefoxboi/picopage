CC = clang
LD = ld.lld

objects = bin/errors.o

LINKLIBS = -lncurses

buildall: buildsrc

buildsrc: $(objects)

bin/errors.o: src/error.c
	$(CC) -c src/error.c -o bin/error.o

