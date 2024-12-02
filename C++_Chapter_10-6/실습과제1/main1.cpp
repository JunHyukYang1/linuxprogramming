#include <iostream>                                           // C++에서 표준 입출력 라이브러리를 사용하기 위한 헤더 파일 포함
#include <vector>                                             // vector 템플릿 클래스를 사용하기 위한 헤더 파일 포함
using namespace std;                                          // 모든 이름의 표준 라이브러리를 사용하기 위한 구문

int main()
{
    vector<vector<int>> v1 = {{2, 4}, {5, -5}};               // vector 클래스를 이용해 만든 2차원 배열 객체 v1, 생성과 함께 초기화
    vector<vector<int>> v2 = {{-2, 3}, {0, -5}};              // vector 클래스를 이용해 만든 2치원 배열 객체 v2, 생성과 함께 초기화
    vector<vector<int>> result;                               // 연산 수행 후 결과를 저장하기 위한 2차원 배열 객체 result

    for (int i = 0; i < v1.size(); i++)
    {
        vector<int> tmp;
        for (int j = 0; j < v1.size(); j++)
        {
            int a;
            a = v1.at(i).at(j) + v2.at(i).at(j);
            tmp.push_back(a);
        }
        result.push_back(tmp);
    }

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result.at(i).size(); j++)
        {
            cout << result.at(i).at(j) << ' ';
        }
        cout << endl;
    }
}
