#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double a, b, alpha;
    cout << "Введите большее основание a: ";
    cin >> a;
    cout << "Введите меньшее основание b: ";
    cin >> b;
    cout << "Введите угол ? при большем основании (в градусах): ";
    cin >> alpha;

    const double pi = 3.14159265358979323846;
    double alpha_rad = alpha * pi / 180.0;
    double h = (a - b) / 2 * tan(alpha_rad);
    double perimeter = a + b + 2 * sqrt(h * h + ((a - b) / 2) * ((a - b) / 2));
    double area = ((a + b) / 2) * h;

    cout << "Периметр трапеции: " << perimeter << endl;
    cout << "Площадь трапеции: " << area << endl;

    return 0;
}