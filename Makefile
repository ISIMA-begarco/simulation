#Compilateur et options de compilation
CC=g++
CFLAGS=-Wall -ansi -pedantic -Wextra -g -o2

#Fichiers du projet
SOURCES=main.cpp
OBJECTS=$(SOURCES:.cpp=.o)

EXEC=executable

$(EXEC): $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $(EXEC)

.c.o:
	$(CC) -c $(CFLAGS) $*.cpp

clean:
	rm $(OBJECTS) $(EXEC)

