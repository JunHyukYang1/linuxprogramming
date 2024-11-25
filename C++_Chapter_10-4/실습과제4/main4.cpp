#include <iostream>                                  // 표준 입출력 라이브러리를 사용하기 위한 헤더 파일 포함
#include <vector>                                    // vector 템플릿 클래스를 사용하기 위한 헤더 파일 포함
#include <algorithm>                                 // 알고리즘 함수를 사용하기 위한 헤더 파일 포함
using namespace std;                                 // 모든 이름의 표준 라이브러리를 사용하기 위한 구문

class Student{                                       // Student 클래스 정의
    string name;                                     // 이름을 저장할 멤버 변수 name
    int score;                                       // 점수를 저장할 멤버 변수 score
public:
    Student(string name, int score) { this->name = name, this->score = score; }        // Student 클래스의 생성자 정의
    bool operator< (Student& op2) {                                                    // 객체 간 < 연산을 위한 연산자 재정의
        if(this->score < op2.score) return true;
        else                        return false;
    }
    void show() {                                                                      // 결과 출력을 위한 멤버 함수 정의
        cout << "이름 : " << name << endl << "성적 : " << score << endl;
    }
};

int main()
{
    vector<Student> st;                                   // vector 클래스의 객체 st 생성
    vector<Student>::iterator it;                         // vector 클래스에 정의되어 있는 iterator 클래스 객체 it 생성
    string name;                                          // 입력 받는 이름을 저장할 변수 선언
    int score;                                            // 입력 받는 정수를 저장할 변수 선언

    for(int i = 0; i < 3; i++) {                          // 사용자로부터 3번까지 이름과 성적을 함께 입력 받아 Student 객체를 생성, 생성한 객체를 vector 클래스의 객체 st에 원소로 저장 
        cout << "이름과 성적을 입력: ";
        cin >> name >> score;
        Student a(name, score);
        st.push_back(a);
    }

    it = max_element(st.begin(), st.end());               // 객체 st의 첫번째 원소부터 끝 원소 다음 주소까지를 범위로 하여 최대값을 반환, 객체 연산을 위에서 재정의함

    cout << "최우수 학생은" << endl;
    it->show();                                           // 결과 출력
}
