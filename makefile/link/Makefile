CFLAGS = -std=c99 -Wall -O2
.PHONY: all
all: main

.c.o:
	$(CC) -c -o $@ $^ $(CFLAGS)

lib%.so: %.c %.h
	$(CC) -shared -fPIC -o $@ $< -lcurl

main: main.c dir1/dir2/urllib.o dir3/dir4/libcurlwrapper.so
	$(CC) -o $@ $(filter-out %.so, $^) -Idir1/ -Idir3/ -Ldir3/dir4/ -lcurlwrapper

run: main
	@LD_LIBRARY_PATH=dir3/dir4 ./main
