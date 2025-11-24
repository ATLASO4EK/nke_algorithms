#define PI 3.14
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double С;
    cout << "Введите длину окружности: ";
    cin >> С;
    double r = С / (2 * PI);
    double S = PI * pow(r, 2);
    cout << "Площадь круга: " << S << endl;

    return 0;
}