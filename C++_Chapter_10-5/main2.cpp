#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a[3][3] = {0};
    vector<int> v;
    vector<int>::iterator it;
    int sum = 0;

    for (int i = 0; i < 3; i++) {
        cout << i+1 << "번째 학생의 국어, 영어, 수학 성적을 입력: ";
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += a[i][j];
        }
        v.push_back(sum / 3.0);
        sum = 0;
    }

    it = max_element(v.begin(), v.end());
    cout << "최우수 학생은 " << (distance(v.begin(), it) + 1) << "번째 학생이고 평균점수는 " << *it << "점이다." << endl;
}