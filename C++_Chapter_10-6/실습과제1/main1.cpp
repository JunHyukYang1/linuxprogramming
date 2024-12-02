#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> v1 = {{2, 4}, {5, -5}};
    vector<vector<int>> v2 = {{-2, 3}, {0, -5}};
    vector<vector<int>> result;

    for (int i = 0; i < v1.size(); i++)
    {
        vector<int> tmp;
        for (int j = 0; j < v1.size(); j++)
        {
            int a;
            a = v1.at(i).at(j) + v2.at(i).at(j);
            tmp.push_back(a);
        }
        result.push_back(tmp);
    }

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result.at(i).size(); j++)
        {
            cout << result.at(i).at(j) << ' ';
        }
        cout << endl;
    }
}
