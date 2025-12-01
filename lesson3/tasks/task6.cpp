#include <iostream>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    double x, y;
    cout << "Введите x" << endl;
    cin >> x;

    if (x < 0){
        y = pow(x, 2);
    } else {
        y = 1 / pow(x, 2);
    }
    cout << "y = " << y << endl;
}