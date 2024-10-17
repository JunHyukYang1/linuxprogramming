CC = gcc
CFLAGS = -g -Wall
OBJS = main.o Max.o
TARGET = MaxValue_C

$(TARGET) : $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)
main.o : main.c Max.h
	$(CC) $(CFLAGS) -c main.c
mylib.o : Max.c Max.h
	$(CC) $(CFLAGS) -c Max.c

.PHONY: clean
clean:
	rm $(TARGET) $(OBJS)
