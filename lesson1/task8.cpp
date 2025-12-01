#define PI 3.14
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double R;
    cout << "Введите радиус круга: ";
    cin >> R;
    double C = 2 * PI * R;
    double S = PI * pow(R, 2);
    cout << "Длина окружности: " << C << endl;
    cout << "Площадь круга: " << S << endl;

    cin.get();
    cin.get();

    return 0;
}