CX = g++               // 컴파일러 지정
CXFLAGS = -g -Wall          // -g : 디버그 모드로 컴파일, -Wall : 모든 경고 메세지 출력
OBJS = main.o Mul.o         // 목적 파일 변수 선언
TARGET = Mul                // 실행 파일 변수 선언

$(TARGET) : $(OBJS)                   // 목적 파일들을 링크하여 실행 파일을 만드는 룰
	$(CX) -o $(TARGET) $(OBJS)
main.o : main.cpp Mul.hpp                     // main.o 목적 파일을 만드는 룰
	$(CX) $(CXFLAGS) -c main.cpp
Mul.o : Mul.cpp Mul.hpp                       // Mul.o 목적 파일을 만드는 룰
	$(CX) $(CXFLAGS) -c Mul.cpp

.PHONY: clean                             // clean이 가짜 타겟임을 표시
clean :                                   // 빌드 과정에서 만들어진 모든 파일을 제거
	rm $(TARGET) $(OBJS)
