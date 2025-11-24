#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double L;
    cout << "Введите длину окружности: ";
    cin >> L;
    const double pi = 3.14;
    double r = L / (2 * pi);
    double S = pi * r * r;
    cout << "Площадь круга: " << S << endl;

    return 0;
}