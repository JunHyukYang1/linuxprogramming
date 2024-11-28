#include <iostream>
using namespace std;

class matrix{
    int array[2][2];
public:
    matrix() {};

    matrix(int a, int b, int c, int d) {
        array[0][0] = a;
        array[0][1] = b;
        array[1][0] = c;
        array[1][1] = d;
    }
    
    matrix operator+ (matrix& op1) {
        matrix temp;
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
                temp.array[i][j] = this->array[i][j] + op1.array[i][j];
            }
        }
        return temp;
    }

    void show() {
        cout << "연산결과:" << endl;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << array[i][j] << ' ';
            }
            cout << endl;
        }
    }
};

int main()
{
    matrix b(2, 4, 5, -5), c(-2, 3, 0, -5);
    matrix d;
    d = b + c;
    d.show();
}
