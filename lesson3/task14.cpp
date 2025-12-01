#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    double a, b;
    cout << "Введите значение в мм" << endl;
    cin >> a ;
    cout << "Введите значение в дюймах" << endl;
    cin >>  b;

    b *= 25.4;

    if (a > b){
        b /= 25.4;
        cout << a << " мм - большее расстояние" << endl << b << " дм - меньшее расстояние" << endl;
    } else {
        b /= 25.4;
        cout << b << " дм - большее расстояние" << endl << a << " мм - меньшее расстояние" << endl;
    }
}