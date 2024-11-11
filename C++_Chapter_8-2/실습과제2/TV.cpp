#include <iostream>
#include "TV.hpp"
using namespace std;

TV::TV() {
    cout << "TV 생성" << endl;
}
void TV::setTV(int size) {
    this->size = size;
}
int TV::getSize() {
    return size;
}

WideTV::WideTV() : TV() {
    cout << "WideTV 생성" << endl;
}
void WideTV::setWideTV(bool videoIn) {
    this->videoIn = videoIn;
}
bool WideTV::getVideoIn() {
    return videoIn;
}

SmartTV::SmartTV() : WideTV() {
    cout << "SmartTV 생성" << endl;
}
void SmartTV::setSmartTV(int size, bool videoIn, string ipAddr) {
    setTV(size);
    setWideTV(videoIn);
    this->ipAddr = ipAddr;
}
string SmartTV::getIpAddr() {
    return ipAddr;
}