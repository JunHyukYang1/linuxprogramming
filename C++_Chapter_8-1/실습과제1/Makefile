CX = g++                   // C++언어 컴파일러 지정
CXFLAGS = -g -Wall            // -g : 디버그 모드로 컴파일, -Wall : 모든 경고문 표시
OBJS = main.o Shape.o           // 목적 파일 변수 선언
TARGET = Shape                  // 실행 파일 변수 선언

$(TARGET) : $(OBJS)                      // 목적 파일들을 링크해 실행 파일을 만드는 규칙
	$(CX) -o $(TARGET) $(OBJS)
main.o : main.cpp Shape.hpp              // main.cpp 소스 파일을 컴파일해 목적 파일을 만드는 규칙
	$(CX) $(CXFLAGS) -c main.cpp
Shape.o : Shape.cpp Shape.hpp            // Shape.cpp 소스 파일을 컴파일해 목적 파일을 만드는 규칙
	$(CX) $(CXFLAGS) -c Shape.cpp

.PHONY: clean                  // clean이 가짜 타겟임을 표시
clean :                        // 빌드 과정 중 만들어진 실행 파일과 목적 파일들 제거
	rm $(TARGET) $(OBJS)
