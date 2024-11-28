#include <iostream>                            // 표준 입출력 라이브러리를 사용하기 위한 헤더 파일 포함
using namespace std;                           // 모든 이름의 표준 라이브러리를 사용하기 위한 구문

class matrix{                                  // 생성됨과 동시에 2차원 배열을 만드는 클래스 matrix 정의
    int array[2][2];                           // 2차원 배열 선언
public:
    matrix() {};                               // 기본 생성자

    matrix(int a, int b, int c, int d) {       // 생성됨과 동시에 2차원 배열의 값을 초기화
        array[0][0] = a;
        array[0][1] = b;
        array[1][0] = c;
        array[1][1] = d;
    }
    
    matrix operator+ (matrix& op1) {           // 객체 간의 + 연산을 위한 연산자 재정의
        matrix temp;                           // 연산 결과를 저장할 객체 생성
        for(int i = 0; i < 2; i++) {           // 피연산자가 가진 2차원 배열의 값을 각각 더해서 객체 temp에 저장
            for(int j = 0; j < 2; j++) {
                temp.array[i][j] = this->array[i][j] + op1.array[i][j];
            }
        }
        return temp;                           // 객체 temp 반환
    }

    void show() {                              // 결과 출력을 위한 함수 정의
        cout << "연산결과:" << endl;
        for (int i = 0; i < 2; i++) {          // 2차원 배열에 저장되어 있는 값들 출력
            for (int j = 0; j < 2; j++) {
                cout << array[i][j] << ' ';
            }
            cout << endl;
        }
    }
};

int main()
{
    matrix b(2, 4, 5, -5), c(-2, 3, 0, -5);         // 2차원 배열을 가지는 객체 b, c 생성
    matrix d;                                       // 객체 연산 후 반환값을 저장할 객체 생성
    d = b + c;                                      // 객체 연산
    d.show();                                       // 결과 출력
}
