#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double a, b;

    cout << "Введите 2 числа " << endl;
    cin >> a >> b;

    cout << "Сумма: " << a + b << endl;
    cout << "Разность: " << a - b << endl;
    cout << "Произведение: " << a * b << endl;
    cout << "Частное: " << a / b << endl;

    cin.get();
    cin.get();
    
    return 0;
}