#include <iostream>                            // C++에서 표준 입출력 라이브러리를 사용하기 위한 헤더 파일 포함
#include <vector>                              // STL 컨테이너 클래스인 vector를 사용하기 위한 헤더 파일 포함
using namespace std;                           // std 이름 공간 안에는 STL이 선언되어 있음

int main()
{
    vector<string> sv;                         // 컨테이너 클래스 vector의 객체 sv 생성, 저장한 변수의 자료형은 string
    string word;                               // 입력 받을 문자열을 저장할 변수 선언

    for(int i = 0; i < 5; i++) {               // push_back()함수를 이용해 객체 sv에 문자열 변수 5개 저장
        cout << "문자열을 입력하세요: ";
        getline(cin, word);
        sv.push_back(word);
    }

    word = sv.at(0);                           // 문자열의 순서를 비교하기 위한 초기값 설정, sv.at(0)는 객체에 저장된 첫번째 문자열을 의미
    for (int i = 1; i < sv.size(); i++) {
        if (word < sv.at(i))   word = sv.at(i);      // 현재 순서의 문자열이 변수에 저장된 문자열보다 순서가 뒤쪽일시 변수에 저장하는 문자열 갱신
    }
    
    cout << "사전에서 제일 뒤에 나오는 단어는 " << word << "입니다." << endl;     // 결과 출력
}
