#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {-5, 2, 35, -20, 5, 100, -75, 5, -25};
    int max = a[0][0];
    int b = 0;
    int c = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if(max < a[i][j]) {
                max = a[i][j];
                b = i + 1;
                c = j + 1;
            }
        }
    }

    cout << "최대값은 " << max << endl << "위치는 " << b << "행 " << c << "열" << endl;
}
