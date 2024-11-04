CX = g++
CXFLAGS = -g -Wall
OBJS = main.o Opr.o
TARGET = Opr

$(TARGET) : $(OBJS)
	$(CX) -o $(TARGET) $(OBJS)
main.o : main.cpp Opr.hpp
	$(CX) $(CXFLAGS) -c main.cpp
Opr.o : Opr.cpp Opr.hpp
	$(CX) $(CXFLAGS) -c Opr.cpp

.PHONY: clean
clean :
	rm $(TARGET) $(OBJS)