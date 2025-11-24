#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double x1, y1, x2, y2, x3, y3;
    cout << "Введите координаты первой вершины (x1 y1): " << endl;
    cin >> x1 >> y1;
    cout << "Введите координаты второй вершины (x2 y2): " << endl;
    cin >> x2 >> y2;
    cout << "Введите координаты третьей вершины (x3 y3): " << endl;
    cin >> x3 >> y3;

    double a = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    double b = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
    double c = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));

    double P = a + b + c;
    double P2 = P / 2; // Полупериметр
    double S = sqrt(P2 * (P2 - a) * (P2 - b) * (P2 - c)); // Формула Герона

    cout << "Периметр треугольника: " << P << endl;
    cout << "Площадь треугольника: " << S << endl;

    cin.get();
    cin.get();
    
    return 0;
}