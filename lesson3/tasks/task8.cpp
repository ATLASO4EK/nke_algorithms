#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    double a, b;
    cout << "Введите значение в км" << endl;
    cin >> a ;
    cout << "Введите значение в футах" << endl;
    cin >>  b;

    b *= 0.45;

    if (a > b){
        b /= 0.45;
        cout << a << " км - большее расстояние" << endl << b << " фт - меньшее расстояние" << endl;
    } else {
        b /= 0.45;
        cout << b << " фт - большее расстояние" << endl << a << " км - меньшее расстояние" << endl;
    }
}