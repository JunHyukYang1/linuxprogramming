#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> sv;
    vector<string>::iterator it;
    string word;

    for(int i = 0; i < 5; i++) {
        cout << "문자열을 입력하세요: ";
        getline(cin, word);
        sv.push_back(word);
    }

    sort(sv.begin(), sv.end());
    cout << "사전에서 나오는 순서 " << endl;
    for(it = sv.begin(); it < sv.end(); it++)
        cout << *it << endl;
}
