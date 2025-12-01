#include <iostream>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    double a, x, y;
    cout << "Введите a, x" << endl;
    cin >> a >> x;

    if (x <= 1){
        y = pow(a, 2) + pow(x, 2);
    } else {
        y = pow(a, 2) - pow(x, 2);
    }
    cout << "y = " << y << endl;
}