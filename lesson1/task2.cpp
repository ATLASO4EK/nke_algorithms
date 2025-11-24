#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    int a, b;
    cout << "Введите два числа: " << endl;
    cin >> a >> b;

    double avg_squares = (pow(a, 2) + pow(b, 2)) / 2.0;
    double avg_abs = (abs(a) + abs(b)) / 2.0;

    cout << "Среднее арифметическое квадратов: " << avg_squares << endl;
    cout << "Среднее арифметическое модулей: " << avg_abs << endl;

    cin.get();
    cin.get();

    return 0;
}