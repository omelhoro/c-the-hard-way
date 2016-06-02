CC=gcc
CFLAGS=-Wall -g
SOURCES=  ex8.c
EXE=current

all:	
	make clean
	$(CC) $(CFLAGS)  $(SOURCES) -o $(EXE)
	@echo "Starting app"
	make run

run:
	valgrind --dsymutil=yes ./$(EXE)

clean:
	rm -f $(EXE)

