#include <iostream>
using namespace std;

int main()
{
    int a[2][2] = { {2, 4}, {5, -5}};
    int b[2][2] = { {-2, 3}, {0, -5}};
    int c[2][2] = {0};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "연산결과:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << c[i][j] << ' ';
        }
        cout << endl;
    }
}
