#define PI 3.1415
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    double x, y;
    cout << "Введите x" << endl;
    cin >> x;

    if (x <= PI/4){
        y = sin(x);
    } else {
        y = cos(x);
    }
    cout << "y = " << y << endl;
}