#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double x1, y1, x2, y2, x3, y3;
    cout << "Введите координаты первой вершины (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Введите координаты второй вершины (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Введите координаты третьей вершины (x3 y3): ";
    cin >> x3 >> y3;

    double a = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    double b = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
    double c = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));

    double perimeter = a + b + c;
    double s = perimeter / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "Периметр треугольника: " << perimeter << endl;
    cout << "Площадь треугольника: " << area << endl;

    return 0;
}