#define PI 3.14
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double R1, R2;
    cout << "Введите внутренний радиус R1: ";
    cin >> R1;
    cout << "Введите внешний радиус R2: ";
    cin >> R2;

    double S = PI * (pow(R2, 2) - pow(R1, 2));
    cout << "Площадь кольца: " << S << endl;

    cin.get();
    cin.get();

    return 0;
}