#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<vector<int>> St;
    vector<int> avg;
    vector<int>::iterator it;

    for (int i = 0; i < 3; i++)
    {
        vector<int> tmp;
        int a;
        cout << i + 1 << "번째 학생의 국어, 영어, 수학 성적을 입력: ";
        for (int j = 0; j < 3; j++) {
            cin >> a;
            tmp.push_back(a);
        }
        St.push_back(tmp);
    }

    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += St.at(i).at(j);
        }
        avg.push_back(sum / 3);
    }

    it = max_element(avg.begin(), avg.end());
    cout << "최우수 학생은 " << distance(avg.begin(), it) + 1 << "번째 학생이고 평균점수는 " << *it << "점이다." << endl;
}
