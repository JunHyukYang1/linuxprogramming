#include <iostream>                            // C++에서 표준 입출력 라이브러리를 사용하기 위한 헤더 파일 포함
#include <vector>                              // STL 컨테이너 클래스인 vector를 사용하기 위한 헤더 파일 포함
using namespace std;                           // std 이름 공간 안에는 STL이 선언되어 있음

int main()
{
    int Max, Min;                              // 최대값과 최소값을 저장할 변수 선언
    vector<int> v;                             // 컨테이너 클래스 vector의 객체 v 생성, 저장할 변수의 자료형은 int

    cout << "정수 4개를 입력하시오: ";
    
    for(int i = 0; i < 4; i++) {               // 객체 v 안에 정수 4개를 입력 받아 저장
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    Max = v.at(0);                             // 최대값 초기 설정

    for (int i = 1; i < v.size(); i++)         // 저장된 정수 중 이전 최대값 보다 큰 정수가 있을 시 최대값 갱신
        if(v.at(i) > Max)   Max = v.at(i);
    
    Min = v.at(0);                             // 최소값 초기 설정

    for (int i = 1; i < v.size(); i++)         // 저장된 정수 중 이전 최소값 보다 작은 정수가 있을 시 최소값 갱신
        if(v.at(i) < Min)   Min = v.at(i);
    
    cout << "최대값은 " << Max << ", 최소값은 " << Min << "입니다." << endl;        // 결과 출력
}
