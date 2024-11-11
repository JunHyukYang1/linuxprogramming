#include "TV.hpp"

int main() {
    SmartTV htv;
    htv.setSmartTV(50, false, "192.0.0.2");
    cout << "size=" << htv.getSize() << endl;
    cout << "videoIn=" << boolalpha << htv.getVideoIn() << endl;
    cout << "IP=" << htv.getIpAddr() << endl;
}