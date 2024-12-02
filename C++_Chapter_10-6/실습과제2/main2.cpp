#include <iostream>                                 // C++에서 표준 입출력 라이브러리를 사용하기 위한 헤더 파일 포함
#include <vector>                                   // vector 템플릿 클래스를 사용하기 위한 헤더 파일 포함
#include <algorithm>                                // 알고리즘 템플릿 함수를 사용하기 위한 헤더 파일 포함
using namespace std;                                // 모든 이름의 표준 라이브러리를 사용하기 위한 구문

int main()
{
    vector<vector<int>> St;                         // 학생 3명의 세가지 과목의 성적을 학생별로 저장하기 위한 2차원 배열 객체 생성
    vector<int> avg;                                // 학생별 평균 성적을 저장하기 위한 1차원 배열 객체 생성
    vector<int>::iterator it;                       // iterator 클래스의 객체 it이 vector 클래스에 종속됨을 명시

    for (int i = 0; i < 3; i++)                     // 사용자로부터 학생 3명의 성적 3개 분의 값을 입력 받아 2차원 배열에 저장
    {
        vector<int> tmp;                            // 2차원 배열에 값을 넣기 위한 1차원 배열 객체 생성
        int a;
        cout << i + 1 << "번째 학생의 국어, 영어, 수학 성적을 입력: ";
        for (int j = 0; j < 3; j++) {
            cin >> a;
            tmp.push_back(a);                       // 입력받은 성적을 tmp의 원소로 하여 저장
        }
        St.push_back(tmp);                          // 1차원 배열인 tmp를 원소로 하여 2차원 배열 객체 St에 저장
    }

    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += St.at(i).at(j);                 // 각 학생들의 성적 총합을 계산
        }
        avg.push_back(sum / 3);                    // 각 학생들의 성적 평균을 1차원 배열 객체인 avg에 저장 
    }

    it = max_element(avg.begin(), avg.end());      // avg의 원소 중 가장 큰 값을 가리키는 주소를 반환하는 알고리즘 함수를 사용
    cout << "최우수 학생은 " << distance(avg.begin(), it) + 1 << "번째 학생이고 평균점수는 " << *it << "점이다." << endl;           // 성적이 가장 놓은 학생의 위치와 해당 학생의 성적 평균을 출력
}
