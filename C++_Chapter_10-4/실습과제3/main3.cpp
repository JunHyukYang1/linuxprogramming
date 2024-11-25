#include <iostream>                                  // 표준 입출력 라이브러리를 사용하기 위한 헤더 파일 포함
#include <vector>                                    // vector 템플릿 클래스를 사용하기 위한 헤더 파일 포함
#include <algorithm>                                 // 알고리즘 함수를 사용하기 위한 헤더 파일 포함
using namespace std;                                 // 모든 이름의 표준 라이브러리를 사용하기 위한 구문

int main()
{
    vector<string> sv;                               // vector 클래스의 객체 sv 생성, 저장할 원소의 자료형은 string
    vector<string>::iterator it;                     // vector 클래스에 정의되어 있는 iterator 클래스의 객체 it 생성
    string word;                                     // 아래에서 입력 받을 문자열을 저장할 변수 선언

    for(int i = 0; i < 5; i++) {                     // 사용자로부터 5개의 문자열을 순서대로 입력 받아 객체 sv의 원소로 저장
        cout << "문자열을 입력하세요: ";
        getline(cin, word);
        sv.push_back(word);
    }

    sort(sv.begin(), sv.end());                      // 객체 sv의 첫번째 원소의 주소부터 끝 원소의 다음 주소를 범위로 하여 오름차순 정렬
    cout << "사전에서 나오는 순서" << endl;           // 오름차순 정렬 후 객체 sv의 원소를 순서대로 출력
    for(it = sv.begin(); it < sv.end(); it++)
        cout << *it << endl;
}
