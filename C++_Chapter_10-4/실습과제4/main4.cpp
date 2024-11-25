#include <iostream>                                  // 표준 입출력 라이브러리를 사용하기 위한 헤더 파일 포함
#include <vector>                                    // vector 템플릿 클래스를 사용하기 위한 헤더 파일 포함
#include <algorithm>                                 // 알고리즘 함수를 사용하기 위한 헤더 파일 포함
using namespace std;                                 // 모든 이름의 표준 라이브러리를 사용하기 위한 구문

class Student{                                       // Student 클래스 정의
    string name;                                     // 이름을 저장할 멤버 변수 name
    int score;                                       // 점수를 저장할 멤버 변수 score
public:
    Student(string name, int score) { this->name = name, this->score = score; }
    bool operator< (Student& op2) {
        if(this->score < op2.score) return true;
        else                        return false;
    }
    void show() {
        cout << "이름 : " << name << endl << "성적 : " << score << endl;
    }
};

int main()
{
    vector<Student> st;
    vector<Student>::iterator it;
    string name;
    int score;

    for(int i = 0; i < 3; i++) {
        cout << "이름과 성적을 입력: ";
        cin >> name >> score;
        Student a(name, score);
        st.push_back(a);
    }

    it = max_element(st.begin(), st.end());

    cout << "최우수 학생은" << endl;
    it->show();
}
