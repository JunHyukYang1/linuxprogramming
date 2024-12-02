#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<vector<int>> v = {{-5, 2, 35}, {-20, 5, 100}, {-75, 5, -25}};

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.at(i).size(); j++) {
            if (v.at(i).at(j) < 0)  v.at(i).at(j) = 0;
            else if (v.at(i).at(j) > 0) v.at(i).at(j) = 255;
        }
    }

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.at(i).size(); j++) {
            cout << v.at(i).at(j) << ' ';
        }
        cout << endl;
    }
}
