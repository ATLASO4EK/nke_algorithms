#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double a, b;
    cout << "Введите катеты a и b: " << endl;
    cin >> a >> b;

    double c = sqrt(a * a + b * b);
    cout << "Гипотенуза треугольника: " << c << endl;
    double P = a + b + c;
    double S = (a * b) / 2;

    cout << "Периметр треугольника: " << P << endl;
    cout << "Площадь треугольника: " << S << endl;

    cin.get();
    cin.get();

    return 0;
}