#include <iostream>                    // 표준 입출력 라이브러리를 사용하기 위한 헤더 파일 포함
using namespace std;                   // 모든 이름의 표준 라이브러리를 사용하기 위한 구문

int main()
{
    int a[3][3] = {-5, 2, 35, -20, 5, 100, -75, 5, -25};          // 2차원 배열 선언 및 초기화

    for (int i = 0; i < 3; i++) {                                 // 2차원 배열 내의 값 중 음수는 0으로 초기화, 양수는 255로 초기화
        for (int j = 0; j < 3; j++) {
            if (a[i][j] < 0)    a[i][j] = 0;
            else if (a[i][j] > 0)   a[i][j] = 255;
        }
    }

    cout << "수정행렬" << endl;                                   // 결과 출력
    for (int i = 0; i < 3; i++) {                                 // 위 코드의 수행 후 2차원 배열 출력
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}
