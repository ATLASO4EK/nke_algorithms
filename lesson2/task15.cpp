#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double x1, y1, x2, y2;
    cout << "Введите координаты первой точки (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Введите координаты второй точки (x2 y2): ";
    cin >> x2 >> y2;

    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    cout << "Расстояние между точками: " << distance << endl;

    return 0;
}