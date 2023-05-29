CC := gcc
#CFLAGS := 
DEST := ./build/

all: insertion_sort.c
	mkdir -p build
	$(CC) insertion_sort.c -lcs50 -o $(DEST)/insertion_sort 