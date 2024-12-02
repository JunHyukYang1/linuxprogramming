#include <iostream>                         // C++에서 표준 입출력 라이브러리를 사용하기 위한 헤더 파일 포함
#include <vector>                           // vector 템플릿 클래스를 사용하기 위한 헤더 파일 포함
#include <algorithm>                        // 알고리즘 템플릿 함수를 사용하기 위한 헤더 파일 포함
using namespace std;                        // 모든 이름의 표준 라이브러리를 사용하기 위한 구문

int main()
{
    vector<vector<int>> v = {{-5, 2, 35}, {-20, 5, 100}, {-75, 5, -25}};            // vector 클래스를 이용한 2차원 배열 생성 및 초기화

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.at(i).size(); j++) {
            if (v.at(i).at(j) < 0)  v.at(i).at(j) = 0;                              // 배열의 원소가 움수일 때 해당 원소값을 0으로 변경
            else if (v.at(i).at(j) > 0) v.at(i).at(j) = 255;                        // 배열의 원소가 양수일 때 해당 원소값을 255로 변경
        }
    }

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.at(i).size(); j++) {
            cout << v.at(i).at(j) << ' ';                                           // 변경 후의 2차원 배열 출력
        }
        cout << endl;
    }
}
