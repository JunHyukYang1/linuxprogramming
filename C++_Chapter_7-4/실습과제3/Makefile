CX = g++
CXFLAGS = -g -Wall
OBJS = main.o Mul.o
TARGET = Mul

$(TARGET) : $(OBJS)
	$(CX) -o $(TARGET) $(OBJS)
main.o : main.cpp Mul.hpp
	$(CX) $(CXFLAGS) -c main.cpp
Mul.o : Mul.cpp Mul.hpp
	$(CX) $(CXFLAGS) -c Mul.cpp

.PHONY: clean
clean :
	rm $(TARGET) $(OBJS)