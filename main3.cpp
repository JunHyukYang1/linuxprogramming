#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int sum = 0;
    float avg = 0.0;

    vector<int> v;
    vector<int>::iterator it;

    cout << "숫자를 입력하세요: ";

    for (int i = 0; i < 5; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    cout << "초기 벡터 원소 : ";

    for (it = v.begin(); it != v.end(); it++) {
        cout << *it << ' ';
    }
    cout << endl;

    for (it = v.begin(); it != v.end(); ) {
        if (*it < 0)    it = v.erase(it);
        else            it++;
    }

    cout << "음수를 삭제 후 벡터원소 : ";

    for (it = v.begin(); it != v.end(); it++) {
        cout << *it << ' ';
    }
    cout << endl;

    for (it = v.begin(); it != v.end(); it++) {
        sum += *it;
    }

    avg = sum / v.size();

    cout << "평균값 : " << avg << endl;
}