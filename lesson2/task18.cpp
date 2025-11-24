#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double A1, B1, C1, A2, B2, C2;
    cout << "Введите коэффициенты первого уравнения (A1, B1, C1): ";
    cin >> A1 >> B1 >> C1;
    cout << "Введите коэффициенты второго уравнения (A2, B2, C2): ";
    cin >> A2 >> B2 >> C2;

    double D = A1 * B2 - A2 * B1;
    double Dx = C1 * B2 - C2 * B1;
    double Dy = A1 * C2 - A2 * C1;

    double x = Dx / D;
    double y = Dy / D;

    cout << "Решение системы:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}