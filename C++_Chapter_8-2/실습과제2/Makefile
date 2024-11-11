CX = g++
CXFLAGS = -g -Wall
OBJS = main.o TV.o
TARGET = TV

$(TARGET) : $(OBJS)
	$(CX) -o $(TARGET) $(OBJS)
main.o : main.cpp TV.hpp
	$(CX) $(CXFLAGS) -c main.cpp
TV.o : TV.cpp TV.hpp
	$(CX) $(CXFLAGS) -c TV.cpp

.PHONY: clean
clean :
	rm $(TARGET) $(OBJS)