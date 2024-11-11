#ifndef _TV_HPP_              // 헤더 파일의 중복 포함을 방지하기 위한 조건부 컴파일 지시자
#define _TV_HPP_              // 매크로 정의
#include <iostream>           // 해당 코드 내에서는 string 클래스를 사용하기 위해 포함시킴
using namespace std;

class TV {           // TV 클래스 선언
    int size;        // private 멤버 변수 size
public:
    TV();                  // TV 클래스의 기본 생성자
    void setTV(int size);        // 멤버 변수 size에 값을 저장하기 위한 멤버 함수 선언
    int getSize();               // 멤버 변수 size에 저장된 값을 반환하기 위한 멤버 함수 선언
};

class WideTV : public TV {          // TV 클래스를 public으로 상속하는 클래스 WideTV 선언
    bool videoIn;                   // private 멤버 변수 videoIn
public:
    WideTV();                       // WideTV 클래스의 기본 생성자
    void setWideTV(bool videoIn);      // 멤버 변수 videoIn에 값을 저장하기 위한 멤버 함수 선언
    bool getVideoIn();                 // 멤버 변수 videoIn에 저장된 값을 반환하기 위한 멤버 함수 선언
};

class SmartTV : public WideTV {       // WideTV 클래스를 public으로 상속하는 클래스 SmartTV 선언
    string ipAddr;                    // private 멤버 변수 ipAddr
public:
    SmartTV();                       // SmartTV 클래스의 기본 생성자
    void setSmartTV(int size, bool videoIn, string ipAddr);         // 각 멤버 변수에 값을 저장하기 위한 멤버 함수 선언
    string getIpAddr();                                             // 멤버 변수 ipAddr에 저장된 값을 반환하기 위한 멤버 함수 선언
};

#endif
