#define PI 3.14
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double a, b, alpha;
    cout << "Введите большее основание a: ";
    cin >> a;
    cout << "Введите меньшее основание b: ";
    cin >> b;
    cout << "Введите угол альфа при большем основании: ";
    cin >> alpha;

    double x = a - b;
    double h = x * tan(alpha);
    double c = sqrt(pow(h, 2) + pow(x, 2));

    double P = a + b + c + h;
    double S = (b * h) + (x * h) / 2;

    cout << "Периметр трапеции: " << P << endl;
    cout << "Площадь трапеции: " << S << endl;

    cin.get();
    cin.get();
    
    return 0;
}