CC = gcc
CFLAGS += -std=c99 -Wall
SOURCE = $(filter-out $(patsubst %.h,%.c,$(wildcard *.h)),$(wildcard *.c))

.SUFFIXES: .c .h
.PHONY: all
all: $(basename $(SOURCE))

%: %.c
	$(CC) -o $@ $^ $(CFLAGS)
