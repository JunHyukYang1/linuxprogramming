#include "TV.hpp"         // 디렉터리 내의 TV.hpp 헤더 파일 포함

int main() {
    SmartTV htv;                                   // SmartTV 클래스의 객체 htv를 생성, 기본 생성자로 생성됨
    htv.setSmartTV(50, false, "192.0.0.2");        // 각 멤버 변수에 값을 저장
    cout << "size=" << htv.getSize() << endl;      // size에 저장된 값을 출력
    cout << "videoIn=" << boolalpha << htv.getVideoIn() << endl;     // videoIn에 저장된 값을 출력
    cout << "IP=" << htv.getIpAddr() << endl;           // ipAddr에 저장된 값을 출력
}
