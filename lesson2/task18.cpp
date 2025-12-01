#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double A1, B1, C1, A2, B2, C2;
    cout << "Введите коэффициенты первого уравнения (A1, B1, C1): " << endl;
    cin >> A1 >> B1 >> C1;
    cout << "Введите коэффициенты второго уравнения (A2, B2, C2): " << endl;
    cin >> A2 >> B2 >> C2;

    // Метод Крамера (через детерминанты)
    double D = A1 * B2 - A2 * B1; // Детерминант основной матрицы
    double Dx = C1 * B2 - C2 * B1; // Детерминант для x
    double Dy = A1 * C2 - A2 * C1; // Детерминант для y

    double x = Dx / D;
    double y = Dy / D;

    cout << "Решение системы:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    cin.get();
    cin.get();
    
    return 0;
}