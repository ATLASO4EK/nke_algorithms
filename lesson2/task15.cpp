#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double x1, y1, x2, y2;
    cout << "Введите координаты первой точки (x1 y1): " << endl;
    cin >> x1 >> y1;
    cout << "Введите координаты второй точки (x2 y2): " << endl;
    cin >> x2 >> y2;

    double distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout << "Расстояние между точками: " << distance << endl;

    cin.get();
    cin.get();
    
    return 0;
}