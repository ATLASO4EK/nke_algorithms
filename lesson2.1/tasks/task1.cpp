#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    double a, b;
    cout << "Введите значиния a и b" << endl;
    cin >> a >> b;

    if (a > b){
        cout << a << " - максимальное число" << endl << b << " - минимальное число" << endl;
    } else {
        cout << b << " - максимальное число" << endl << a << " - минимальное число" << endl;
    }
}