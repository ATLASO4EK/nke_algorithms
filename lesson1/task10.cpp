#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double a;
    cout << "Введите сторону равностороннего треугольника: ";
    cin >> a;

    double area = (sqrt(3) / 4) * a * a;
    double r_in = a / (2 * sqrt(3));
    double r_out = a / sqrt(3);

    cout << "Площадь треугольника: " << area << endl;
    cout << "Радиус вписанной окружности: " << r_in << endl;
    cout << "Радиус описанной окружности: " << r_out << endl;

    return 0;
}