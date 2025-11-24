#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double S;
    cout << "Введите площадь круга: ";
    cin >> S;
    const double pi = 3.14;
    double r = sqrt(S / pi);
    double C = 2 * pi * r;
    cout << "Длина окружности: " << C << endl;

    return 0;
}