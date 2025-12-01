#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    int V, U, T1, T2;
    cout << "Введите скорость лодки (V) км/ч: ";
    cin >> V;
    cout << "Введите скорость течения (U) км/ч: ";
    cin >> U;
    cout << "Введите время движения по озеру (T1) ч: ";
    cin >> T1;
    cout << "Введите время движения по реке против течения (T2) ч: ";
    cin >> T2;

    int S1 = V * T1;       // путь по озеру
    int S2 = (V - U) * T2; // путь по реке против течения

    int S = S1 + S2;
    cout << "Путь, пройденный лодкой: " << S << endl;

    cin.get();
    cin.get();
    
    return 0;
}