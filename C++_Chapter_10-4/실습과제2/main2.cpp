#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> sv;
    string word;

    for(int i = 0; i < 5; i++) {
        cout << "문자열을 입력하세요: ";
        getline(cin, word);
        sv.push_back(word);
    }

    sort(sv.begin(), sv.end());
    cout << "사전에서 제일 뒤에 나오는 단어는 " << *(sv.end() - 1) << endl;
}
