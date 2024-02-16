CC=gcc
CFLAGS=-Wall
IDIR=./src/include
DEPS=$(IDIR)/command_handler.c
OUTPUT=main

build:
	$(CC) $(CFLAGS) $(DEPS) src/main.c -o $(OUTPUT)

run: build
	./$(OUTPUT)
