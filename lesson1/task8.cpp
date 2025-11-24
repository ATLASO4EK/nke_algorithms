#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double R;
    const double PI = 3.14;
    cout << "Введите радиус круга: ";
    cin >> R;
    double circumference = 2 * PI * R;
    double area = PI * R * R;
    cout << "Длина окружности: " << circumference << endl;
    cout << "Площадь круга: " << area << endl;

    return 0;
}