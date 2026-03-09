#define PI 3.1415
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

    double S_round = PI * pow(r, 2);
    double S_square = pow(a, 2);

    if (S_round > S_square){
        cout << "Площадь круга больше" << endl;
    } else if (S_round == S_square){
        cout << "Площади одинаковы" << endl;
    } else {
        cout << "Площадь квадрата больше" << endl;
    }
}