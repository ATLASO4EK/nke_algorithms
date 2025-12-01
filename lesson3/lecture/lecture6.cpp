#include <iostream>
#include <cmath>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;

    unsigned int day_of_week;

    cout << "Введите номер дня недели (1-7)" << endl;
    cin >> day_of_week;

    switch (day_of_week)
    {
    case 1: cout << "Понедельник" << endl; break;
    case 2: cout << "Вторник" << endl; break;
    case 3: cout << "Среда" << endl; break;
    case 4: cout << "Четверг" << endl; break;
    case 5: cout << "Пятница" << endl; break;
    case 6: cout << "Суббота" << endl; break;
    case 7: cout << "Воскресенье" << endl; break;
    default: cout << "Ошибка: в неделе 7 дней!" << endl; break;
    }
}