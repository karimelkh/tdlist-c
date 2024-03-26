CC = gcc
CFLAGS = -Wall -Werror -Wpedantic -Wextra -Wconversion

TARGET = tdlist

.PHONY: clean install uninstall

all:
	$(CC) $(CFLAGS) -o $(TARGET) tdlist.c

clean:
	rm -f $(TARGET) *.o

install: all
	sudo cp $(TARGET) /bin/

uninstall: clean
	sudo rm -f /bin/$(TARGET)
