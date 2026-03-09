#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    int a, b;
    cout << "Введите значиния a, b" << endl;
    cin >> a >> b;

    if (a == b) cout << "a равно b" << endl;
    if (a != b) cout << "a не равно b" << endl;
    if (a < b) cout << "a меньше b" << endl;
    if (a > b) cout << "a больше b" << endl;
    if (a <= b) cout << "a меньше или равно b" << endl;
    if (a >= b) cout << "a больше или равно b" << endl;
}