#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<vector<int>> v = {{-5, 2, 35}, {-20, 5, 100}, {-75, 5, -25}};
    int Max = v.at(0).at(0);
    int row, col;

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.at(i).size(); j++) {
            if (v.at(i).at(j) > Max) {
                Max = v.at(i).at(j);
                row = i + 1;
                col = j + 1;
            }
        }
    }

    cout << "최대값은 " << Max << endl << "위치는 " << row << "행 " << col << "열" << endl;
}