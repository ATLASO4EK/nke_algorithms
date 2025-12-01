#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double V1, V2, S, T;
    cout << "Введите скорость первого автомобиля (V1) км/ч: ";
    cin >> V1;
    cout << "Введите скорость второго автомобиля (V2) км/ч: ";
    cin >> V2;
    cout << "Введите начальное расстояние между автомобилями (S) км: ";
    cin >> S;
    cout << "Введите время в часах (T) ч: ";
    cin >> T;

    double distance = S + (V1 + V2) * T;
    cout << "Расстояние между автомобилями через " << T << " часов: " << distance << endl;

    cin.get();
    cin.get();

    return 0;
}