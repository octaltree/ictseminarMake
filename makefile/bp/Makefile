CC = gcc
CFLAGS += -std=c99 -Wall -O0 -g
SOURCE = $(filter-out $(patsubst %.h,%.c,$(wildcard *.h)),$(wildcard *.c))
all: $(basename $(SOURCE))

%: %.c
	$(CC) -o $@ $^ $(CFLAGS)
