#include <iostream>       // 표준 입출력 라이브러리를 사용하기 위한 헤더 파일 포함
#include "TV.hpp"         // 클래스들을 선언한 같은 디렉터리 내의 헤더 파일 포함
using namespace std;      // 모든 이름의 표준 라이브러리를 사용하기 위한 구문

TV::TV() {                         // TV 클래스의 기본 생성자 정의
    cout << "TV 생성" << endl;
}
void TV::setTV(int size) {         // TV 쿨래스의 멤버 변수 size에 값을 저장하는 멤버 함수 정의
    this->size = size;
}
int TV::getSize() {            // 멤버 변수 size에 저장된 값을 반환하는 멤버 함수 정의
    return size;
}

WideTV::WideTV() : TV() {           // TV 클래스의 기본 생성자를 상속함을 명시하는 WideTV 클래스의 기본 생성자
    cout << "WideTV 생성" << endl;
}
void WideTV::setWideTV(bool videoIn) {      // WideTV 클래스의 멤버 변수 videoIn에 값을 저장하는 멤버 함수 정의
    this->videoIn = videoIn;
}
bool WideTV::getVideoIn() {           // 멤버 변수 videoIn에 저장된 값을 반환하는 멤버 함수 정의
    return videoIn;
}

SmartTV::SmartTV() : WideTV() {           // WideTV 클래스의 기본 생성자를 상속함을 명시하는 SmartTV 클래스의 기본 생성자
    cout << "SmartTV 생성" << endl;
}
void SmartTV::setSmartTV(int size, bool videoIn, string ipAddr) {       // size와 videoIn은 부모 클래스들의 private 멤버 변수이므로 직접 접근이 불가
    setTV(size);                                                        // 따라서 각 부모 클래스의 멤버 함수를 활용해 멤버 변수에 값을 저장
    setWideTV(videoIn);
    this->ipAddr = ipAddr;
}
string SmartTV::getIpAddr() {          // 멤버 변수 ipAddr에 저장된 값을 반환하는 멤버 함수 정의
    return ipAddr;
}
