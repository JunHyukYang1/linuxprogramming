#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student{
    string name;
    int score;
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