#include <iostream>
#include <cmath>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    int year;

    cout << "Введите год" << endl;
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " високосный год" << endl;
    } else {
        cout << year << " не високосный год" << endl;
    }
}