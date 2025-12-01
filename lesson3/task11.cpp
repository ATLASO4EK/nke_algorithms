#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    double a, b;
    cout << "Введите значение в км/ч" << endl;
    cin >> a ;
    cout << "Введите значение в м/с" << endl;
    cin >>  b;

    b *= 3.6;

    if (a > b){
        b /= 3.6;
        cout << a << " км/ч - большее расстояние" << endl << b << " м/с - меньшее расстояние" << endl;
    } else {
        b /= 3.6;
        cout << b << " м/с - большее расстояние" << endl << a << " км/ч - меньшее расстояние" << endl;
    }
}