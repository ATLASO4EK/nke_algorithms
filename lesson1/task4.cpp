#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double V1, V2, S, T;
    cout << "Введите скорость первого автомобиля (V1): ";
    cin >> V1;
    cout << "Введите скорость второго автомобиля (V2): ";
    cin >> V2;
    cout << "Введите начальное расстояние между автомобилями (S): ";
    cin >> S;
    cout << "Введите время в часах (T): ";
    cin >> T;

    double distance = S + (V1 + V2) * T;
    cout << "Расстояние между автомобилями через " << T << " часов: " << distance << endl;

    return 0;
}