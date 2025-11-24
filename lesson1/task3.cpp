#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double V, U, T1, T2;
    cout << "Введите скорость лодки (V): ";
    cin >> V;
    cout << "Введите скорость течения (U): ";
    cin >> U;
    cout << "Введите время движения по озеру (T1): ";
    cin >> T1;
    cout << "Введите время движения по реке против течения (T2): ";
    cin >> T2;

    double S1 = V * T1;       // путь по озеру
    double S2 = (V - U) * T2; // путь по реке против течения

    double S = S1 + S2;
    cout << "Путь, пройденный лодкой: " << S << endl;

    return 0;
}