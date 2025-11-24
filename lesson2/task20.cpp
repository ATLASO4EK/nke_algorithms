#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    int num;
    cout << "Введите четырехзначное число: ";
    cin >> num;

    int d1 = num / 1000;           // первая цифра
    int d2 = (num / 100) % 10;     // вторая цифра
    int d3 = (num / 10) % 10;      // третья цифра
    int d4 = num % 10;             // четвертая цифра

    int product = d1 * d2 * d3 * d4;
    cout << "Произведение цифр: " << product << endl;

    return 0;
}