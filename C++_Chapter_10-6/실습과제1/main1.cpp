#include <iostream>                                           // C++에서 표준 입출력 라이브러리를 사용하기 위한 헤더 파일 포함
#include <vector>                                             // vector 템플릿 클래스를 사용하기 위한 헤더 파일 포함
using namespace std;                                          // 모든 이름의 표준 라이브러리를 사용하기 위한 구문

int main()
{
    vector<vector<int>> v1 = {{2, 4}, {5, -5}};               // vector 클래스를 이용해 만든 2차원 배열 객체 v1, 생성과 함께 초기화
    vector<vector<int>> v2 = {{-2, 3}, {0, -5}};              // vector 클래스를 이용해 만든 2치원 배열 객체 v2, 생성과 함께 초기화
    vector<vector<int>> result;                               // 연산 수행 후 결과를 저장하기 위한 2차원 배열 객체 result

    for (int i = 0; i < v1.size(); i++)                       // 객체 v1과 v2의 같은 행, 같은 열에 있는 원소끼리 + 연산 후 result 객체에 저장
    {
        vector<int> tmp;                                      // 2차원 배열 객체 result에 값을 넣기 위한 1차원 배열 객체 tmp 생성
        for (int j = 0; j < v1.size(); j++)
        {
            int a;
            a = v1.at(i).at(j) + v2.at(i).at(j);              // 같은 위치의 원소끼리 + 연산 후 변수에 저장
            tmp.push_back(a);                                 // 변수에 저장된 값을 tmp의 원소로 저장
        }
        result.push_back(tmp);                                // 1차원 배열인 tmp 객체 자체를 원소로 하여 result에 저장
    }

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result.at(i).size(); j++)
        {
            cout << result.at(i).at(j) << ' ';               // 연산 후 결과가 저장된 객체의 출력
        }
        cout << endl;
    }
}
