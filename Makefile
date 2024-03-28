CC = gcc
CFLAGS = -Wall -Werror -Wpedantic -Wextra -Wconversion
SRC = src
BLD = build
TARGET = tdlist

all:
	$(CC) $(CFLAGS) -o $(BLD)/$(TARGET) $(SRC)/tdlist.c

clean:
	rm -f $(BLD)/*

install: all
	sudo cp $(TARGET) /bin/

uninstall: clean
	sudo rm -f /bin/$(TARGET)

check:
	./check.sh

.PHONY: clean install uninstall check
