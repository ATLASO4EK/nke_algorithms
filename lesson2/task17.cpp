#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double A, B, C;
    cout << "Введите коэффициенты A, B и C: ";
    cin >> A >> B >> C;

    double D = B * B - 4 * A * C;
    double x1 = (-B + sqrt(D)) / (2 * A);
    double x2 = (-B - sqrt(D)) / (2 * A);

    cout << "Корни уравнения: x1 = " << x1 << ", x2 = " << x2 << endl;

    return 0;
}