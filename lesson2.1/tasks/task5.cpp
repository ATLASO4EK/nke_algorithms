#include <iostream>
#include <cmath>

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
    double diag = a * sqrt(2);

    if (d < diag){
        cout << "Квадрат нельзя вписать в круг" << endl;
    } else {
        cout << "Квадрать можно вписать в круг" << endl;
    }
}