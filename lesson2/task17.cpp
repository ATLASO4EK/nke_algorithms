#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double a, b, c;
    cout << "Введите коэффициенты A, B и C: " << endl;
    cin >> a >> b >> c;

    double D = pow(b, 2) - 4 * a * c;
    double x1 = (-b + sqrt(D)) / (2 * a);
    double x2 = (-b - sqrt(D)) / (2 * a);

    cout << "Корни уравнения: x1 = " << x1 << ", x2 = " << x2 << endl;

    cin.get();
    cin.get();
    
    return 0;
}