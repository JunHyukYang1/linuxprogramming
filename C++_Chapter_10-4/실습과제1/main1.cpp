#include <iostream>                                  // 표준 입출력 라이브러리를 사용하기 위한 헤더 파일 포함
#include <vector>                                    // vector 템플릿 클래스를 사용하기 위한 헤더 파일 포함
#include <algorithm>                                 // 알고리즘 함수를 사용하기 위한 헤더 파일 포함
using namespace std;                                 // 모든 이름의 표준 라이브러리를 사용하기 위한 구문

int main()
{
    vector<int> v;                                   // vector 클래스의 객체 v 생성, 저장할 원소의 자료형은 int
    vector<int>::iterator it;                        // vector 클래스에 정의되어 있는 iterator 클래스의 객체 it 생성
    cout << "정수 4개를 입력하시오: ";
    for(int i = 0; i < 4; i++) {                     // 터미널로 4개의 정수를 동시에 입력 받아 객체 v의 원소로 저장
        int n;
        cin >> n;
        v.push_back(n);
    }

    it = max_element(v.begin(), v.end());                                              // 객체의 첫번째 원소 주소부터 객체의 끝 원소 다음 주소까지의 범위에서 최대값을 가지는 주소를 반환
    cout << "최대값은 " << distance(v.begin(), it) << "번째 값 " << *it << endl;        // 최대값이 저장되어 있는 주소의 순서와 최대값을 출력

    it = min_element(v.begin(), v.end());                                              // 객체의 첫번째 원소 주소부터 객체의 끝 원소 다음 주소까지의 범위에서 최소값을 가지는 주소를 반환
    cout << "최소값은 " << distance(v.begin(), it) << "번째 값 " << *it << endl;        // 최소값이 저장되어 있는 주소의 순서와 최소값을 출력

    sort(v.begin(), v.end());                                                          // 객체의 첫번째 원소 주소부터 객체의 끝 원소 다음 주소까지를 범위로 하여 오름차순 정렬

    cout << "오름차순 결과는 ";
    for(it = v.begin(); it < v.end() - 1; it++)                                        // 오름차순 정렬 후 객체 v의 원소를 순서대로 출력
        cout << *it << ", ";
    cout << *(v.end() - 1) << endl;

    cout<< "내림차순 결과는 ";
    sort(v.begin(), v.end(), std::greater<int>());                                     // 객체의 첫번째 원소 주소부터 객체의 끝 원소 다음 주소까지를 범위로 하여 내림차순 정렬
    for(it = v.begin(); it < v.end() - 1; it++)                                        // 내림차순 정렬 후 객체 v의 원소를 순서대로 출력
        cout << *it << ", ";
    cout << *(v.end() - 1) << endl;
}
