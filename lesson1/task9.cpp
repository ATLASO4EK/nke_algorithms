#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double R1, R2;
    cout << "Введите внутренний радиус R1: ";
    cin >> R1;
    cout << "Введите внешний радиус R2: ";
    cin >> R2;

    if (R1 < R2 && R1 >= 0 && R2 >= 0) {
        double area = 3.141592653589793 * (R2 * R2 - R1 * R1);
        cout << "Площадь кольца: " << area << endl;
    } else {
        cout << "Ошибка: R1 должно быть меньше R2 и оба радиуса неотрицательны." << endl;
    }

    return 0;
}