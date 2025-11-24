#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double a;
    cout << "Введите длину ребра куба: ";
    cin >> a;

    double S_face = pow(a, 2);
    double S_surface = 6 * S_face;
    double V = pow(a, 3);

    cout << "Площадь грани: " << S_face << endl;
    cout << "Площадь полной поверхности: " << S_surface << endl;
    cout << "Объем: " << V << endl;

    cin.get();
    cin.get();

    return 0;
}