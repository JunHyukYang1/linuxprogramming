#include <iostream>
#include <vector>
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

    word = sv.at(0);
    for (int i = 1; i < sv.size(); i++) {
        if (word < sv.at(i))   word = sv.at(i);
    }
    
    cout << "사전에서 제일 뒤에 나오는 단어는 " << word << "입니다." << endl;
}
