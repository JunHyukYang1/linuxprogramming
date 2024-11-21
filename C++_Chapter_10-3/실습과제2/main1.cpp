#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int Max, Min;
    vector<int> v;

    cout << "정수 4개를 입력하시오: ";
    
    for(int i = 0; i < 4; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    Max = v.at(0);

    for (int i = 1; i < v.size(); i++)
        if(v.at(i) > Max)   Max = v.at(i);
    
    Min = v.at(0);

    for (int i = 1; i < v.size(); i++)
        if(v.at(i) < Min)   Min = v.at(i);
    
    cout << "최대값은 " << Max << ", 최소값은 " << Min << "입니다." << endl;
}