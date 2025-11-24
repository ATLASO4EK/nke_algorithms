#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double a, b;
    cout << "Введите катеты a и b: ";
    cin >> a >> b;

    double c = sqrt(a * a + b * b);
    double perimeter = a + b + c;
    double area = (a * b) / 2;

    cout << "Периметр треугольника: " << perimeter << endl;
    cout << "Площадь треугольника: " << area << endl;

    return 0;
}