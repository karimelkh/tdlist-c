CC = gcc
CF = -Wall -Werror -Wpedantic -Wextra

EXEC = tdlist

all:
	$(CC) $(CF) -o $(EXEC) tdlist.c

clean:
	rm -f $(EXEC) *.o

install: all
	sudo cp $(EXEC) /bin/

unistall: clean
	sudo rm -f /bin/$(EXEC)
