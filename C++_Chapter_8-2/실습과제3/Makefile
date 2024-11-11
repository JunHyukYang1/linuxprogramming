CX = g++               // 컴파일러 지정
CXFLAGS = -g -Wall          // -g : 디버그 모드로 컴파일, -Wall : 모든 경고문 출력
OBJS = main.o Shape.o          // 목적 파일 변수 저장
TARGET = Shape                 // 실행 파일 변수 저장

$(TARGET) : $(OBJS)                  // 목적 파일을 링크해 실행 파일을 만드는 규칙
	$(CX) -o $(TARGET) $(OBJS)
main.o : main.cpp Shape.hpp             // main.cpp 파일을 컴파일해 목적 파일 main.o를 만드는 규칙
	$(CX) $(CXFLAGS) -c main.cpp
Shape.o : Shape.cpp Shape.hpp                 // Shape.cpp 파일을 컴파일해 목적 파일 Shape.o를 만드는 규칙
	$(CX) $(CXFLAGS) -c Shape.cpp

.PHONY: clean            // clean이 가짜 타겟임을 명시
clean :                     // make 과정에서 만들어진 모든 파일 삭제
	rm $(TARGET) $(OBJS)
