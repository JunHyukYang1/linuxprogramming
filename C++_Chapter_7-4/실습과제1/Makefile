CX = g++             // 컴파일러 지정
CXFLAGS = -g -Wall           // 컴파일 시 옵션 지정 (컴파일 중의 모든 오류를 출력시킴)
OBJS = main.o Opr.o          // 목적 파일 선언
TARGET = Opr                 // 실행 파일 선언

$(TARGET) : $(OBJS)                   // 목적 파일들을 엮어 실행 파일을 만듦
	$(CX) -o $(TARGET) $(OBJS)
main.o : main.cpp Opr.hpp                // main.o 목적 파일을 만들기 위해 컴파일 시킴
	$(CX) $(CXFLAGS) -c main.cpp
Opr.o : Opr.cpp Opr.hpp                  // Opr.o 목적 파일을 만들기 위해 컴파일 시킴
	$(CX) $(CXFLAGS) -c Opr.cpp

.PHONY: clean
clean :                             // make를 진행하면서 만들어진 모든 파일을 제거
	rm $(TARGET) $(OBJS)
