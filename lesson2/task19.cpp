#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    int num;
    cout << "Введите число: ";
    cin >> num;

    int sum = (num / 1000) + ((num / 100) % 10) + ((num / 10) % 10) + (num % 10);
    cout << "Сумма цифр: " << sum << endl;

    return 0;
}