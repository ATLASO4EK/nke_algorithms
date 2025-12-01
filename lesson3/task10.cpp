#include <iostream>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    double a, b;
    cout << "Введите a, b" << endl;
    cin >> a >> b;

    if (b != 0){
        a /= b;
        cout << "a / b = " << a << endl;
    } else {
        cout << "Ты как на ноль делить собрался" << endl;
    }
}