#include <iostream>                              // 표준 입출력 라이브러리를 사용하기 위한 헤더 파일 포함
#include <vector>                                // vector 템플릿 클래스를 사용하기 위한 헤더 파일 포함
#include <algorithm>                             // 알고리즘 템플릿 함수를 사용하기 위한 헤더 파일 포함
using namespace std;                             // 모든 이름의 표준 라이브러리를 사용하기 위한 구문

int main()
{
    int a[3][3] = {0};                           // 2차원 배열 선언 및 초기화
    vector<int> v;                               // vector 클래스 객체 v 생성
    vector<int>::iterator it;                    // iterator 클래스 객체 it이 vector 클래스에 종속됨을 명시
    int sum = 0;                                 // 개인 점수 총합을 저장하기 위한 변수 선언

    for (int i = 0; i < 3; i++) {                // 2차원 배열에 값 저장
        cout << i+1 << "번째 학생의 국어, 영어, 수학 성적을 입력: ";
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {                // 같은 행의 수들을 합하고 3으로 나눠 평균을 구한 후 객체 v의 원소로 저장
        for (int j = 0; j < 3; j++) {
            sum += a[i][j];
        }
        v.push_back(sum / 3.0);
        sum = 0;
    }

    it = max_element(v.begin(), v.end());       // 객체의 원소 중 가장 큰 값을 가리키는 주소를 반환하는 알고리즘 함수를 이용
    cout << "최우수 학생은 " << (distance(v.begin(), it) + 1) << "번째 학생이고 평균점수는 " << *it << "점이다." << endl;     // 결과 출력
}
