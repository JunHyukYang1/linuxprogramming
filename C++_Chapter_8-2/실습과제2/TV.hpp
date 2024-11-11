#ifndef _TV_HPP_
#define _TV_HPP_
#include <iostream>
using namespace std;

class TV {
    int size;
public:
    TV();
    void setTV(int size);
    int getSize();
};

class WideTV : public TV {
    bool videoIn;
public:
    WideTV();
    void setWideTV(bool videoIn);
    bool getVideoIn();
};

class SmartTV : public WideTV {
    string ipAddr;
public:
    SmartTV();
    void setSmartTV(int size, bool videoIn, string ipAddr);
    string getIpAddr();
};

#endif