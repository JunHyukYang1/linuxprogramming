#include <iostream>                     // C++에서 표준 입출력 라이브러리를 사용하기 위한 헤더 파일 포함
#include <vector>                       // vector 템플릿 클래스를 사용하기 위한 헤더 파일 포함
#include <algorithm>                    // 알고리즘 템플릿 함수를 사용하기 위한 헤더 파일 포함
using namespace std;                    // 모든 이름의 표준 라이브러리를 사용하기 위한 구문

int main()
{
    vector<vector<int>> v = {{-5, 2, 35}, {-20, 5, 100}, {-75, 5, -25}};           // 2차원 배열 생성 및 초기화
    int Max = v.at(0).at(0);                                                       // 배열의 원소 중 최대값을 구하기 위한 초기값 설정
    int row, col;                                                                  // 최대값이 위치한 행과 열을 저장하기 위한 변수 선언

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.at(i).size(); j++) {
            if (v.at(i).at(j) > Max) {                                             // 해당 위치의 원소가 기존 최대값 변수에 저장된 값보다 클 시 변수에 해당 원소값을 저장
                Max = v.at(i).at(j);
                row = i + 1;                                                       // 행 저장
                col = j + 1;                                                       // 열 저장
            }
        }
    }

    cout << "최대값은 " << Max << endl << "위치는 " << row << "행 " << col << "열" << endl;        // 결과 출력
}
