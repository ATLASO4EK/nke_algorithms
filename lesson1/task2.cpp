#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double a, b;
    cout << "Введите два числа: " << endl;
    cin >> a >> b;

    double avg_squares = (a * a + b * b) / 2.0;
    double avg_abs = (abs(a) + abs(b)) / 2.0;

    cout << "Среднее арифметическое квадратов: " << avg_squares << endl;
    cout << "Среднее арифметическое модулей: " << avg_abs << endl;

    return 0;
}