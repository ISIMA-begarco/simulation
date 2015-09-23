#Compilateur et options de compilation
CC=gcc
CFLAGS=-lm -Wall -pedantic -Wextra -g

#Fichiers du projet
SOURCES=main.c von_neuman.c congruential.c
OBJECTS=$(SOURCES:.c=.o)

EXEC=executable

$(EXEC): $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $(EXEC)

.c.o:
	$(CC) -c $(CFLAGS) $*.c

clean:
	rm $(OBJECTS) $(EXEC)

