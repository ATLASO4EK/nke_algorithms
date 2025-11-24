#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double S;
    cout << "Введите площадь круга: ";
    cin >> S;
    double r = sqrt(S / PI);
    double C = 2 * PI * r;
    cout << "Длина окружности: " << C << endl;

    cin.get();
    cin.get();

    return 0;
}