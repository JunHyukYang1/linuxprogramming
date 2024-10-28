CX = g++
CXFLAGS = -g -Wall
OBJS = main.o sum.o
TARGET = complex
$(TARGET) : $(OBJS)
	$(CX) -o $(TARGET) $(OBJS)
main.o : main.cpp sum.hpp
	$(CX) $(CXFLAGS) -c main.cpp
sum.o: sum.cpp sum.hpp
	$(CX) $(CXFLAGS) -c sum.cpp

.PHONY: clean
clean: 
	rm $(TARGET) $(OBJS)
