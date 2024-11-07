CX = g++
CXFLAGS = -g -Wall
OBJS = main.o Shape.o
TARGET = Shape

$(TARGET) : $(OBJS)
	$(CX) -o $(TARGET) $(OBJS)
main.o : main.cpp Shape.hpp
	$(CX) $(CXFLAGS) -c main.cpp
Shape.o : Shape.cpp Shape.hpp
	$(CX) $(CXFLAGS) -c Shape.cpp

.PHONY: clean
clean :
	rm $(TARGET) $(OBJS)
