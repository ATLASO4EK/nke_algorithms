#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    double m1, m2, v1, v2;
    cout << "Введите значение массы и объема 1" << endl;
    cin >> m1 >> v1 ;
    cout << "Введите значение массы и объема 2" << endl;
    cin >> m2 >> v2;

    double p1 = m1 / v1;
    double p2 = m2 / v2;

    if (p1 > p2){
        cout << p1 << " (плотсность 1) больше" << endl << p2 << " (плотность 2) меньше" << endl;
    } 
    else if (p1 == p2){
        cout << "Плотности равны" << endl;
    }
    else {
        cout << p2 << " (плотсность 2) больше" << endl << p1 << " (плотность 1) меньше" << endl;
    }
}