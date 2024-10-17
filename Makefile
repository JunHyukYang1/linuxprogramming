CX = g++
CXFLAGS = -g -Wall
OBJS = main.o Max.o
TARGET = MaxValue_CPP

$(TARGET) : $(OBJS)
	$(CX) -o $(TARGET) $(OBJS)
main.o : main.cpp Max.hpp
	$(CX) $(CXFLAGS) -c main.cpp
Max.o : Max.cpp Max.hpp
	$(CX) $(CXFLAGS) -c Max.cpp

.PHONY: clean
clean :
	rm $(TARGET) $(OBJS)
