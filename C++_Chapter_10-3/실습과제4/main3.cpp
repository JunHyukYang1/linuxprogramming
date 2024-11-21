#include <iostream>                            // C++에서 표준 입출력 라이브러리를 사용하기 위한 헤더 파일 포함
#include <vector>                              // STL 컨테이너 클래스인 vector를 사용하기 위한 헤더 파일 포함
using namespace std;                           // std 이름 공간 안에는 STL이 선언되어 있음

int main()
{
    int sum = 0;                               // 후에 평균값 계산을 위한 변수 선언 (총합)
    float avg = 0.0;                           // 후에 평균값 계산을 위한 변수 선언 (평균)

    vector<int> v;                             // 컨테이너 클래스 vector의 객체 v 생성, 저장할 변수의 자료형은 int
    vector<int>::iterator it;                  // iterator 클래스의 소속을 명시

    cout << "숫자를 입력하세요: ";

    for (int i = 0; i < 5; i++) {              // 객체 v에 숫자 5개를 입력받아 저장
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    cout << "초기 벡터 원소 : ";

    for (it = v.begin(); it != v.end(); it++) {       // 인덱스 오류 방지
        cout << *it << ' ';                           // 객체 v에 저장된 초기 값들 출력
    }
    cout << endl;

    for (it = v.begin(); it != v.end(); ) {           // 저장되어 있는 값들 중 음수가 존재할 시 객체 내에서 삭제
        if (*it < 0)    it = v.erase(it);
        else            it++;
    }

    cout << "음수를 삭제 후 벡터원소 : ";

    for (it = v.begin(); it != v.end(); it++) {       // 음수를 제거한 후 남은 값들을 출력
        cout << *it << ' ';
    }
    cout << endl;

    for (it = v.begin(); it != v.end(); it++) {       // 평균값 계산을 위해 남은 값들을 모두 더해서 변수에 저장
        sum += *it;
    }

    avg = sum / v.size();                             // 평균값 계산

    cout << "평균값 : " << avg << endl;               // 결과 출력
}
