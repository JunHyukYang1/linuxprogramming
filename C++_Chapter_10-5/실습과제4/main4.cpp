#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {-5, 2, 35, -20, 5, 100, -75, 5, -25};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] < 0)    a[i][j] = 0;
            else if (a[i][j] > 0)   a[i][j] = 255;
        }
    }

    cout << "수정행렬" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}
