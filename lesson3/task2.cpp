#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    double a, r;
    cout << "Введите сторону квадрата" << endl;
    cin >> a;
    cout << "Введите радиус круга" << endl;
    cin >> r;

    double d = r * 2;

    if (a < d){
        cout << "Круг нельзя вписать в квадрат" << endl;
    } else {
        cout << "Круг можно вписать в квадрат" << endl;
    }
}