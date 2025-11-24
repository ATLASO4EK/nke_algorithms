#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double a, b, alpha;
    cout << "Введите основания трапеции a и b (a > b): ";
    cin >> a >> b;
    cout << "Введите острый угол ? (в градусах): ";
    cin >> alpha;

    const double PI = 3.14159265358979323846;
    double alpha_rad = alpha * PI / 180.0;

    // Высота трапеции
    double h = (a - b) * tan(alpha_rad);

    // Периметр
    double side = h / sin(alpha_rad);
    double perimeter = a + b + side + h;

    // Площадь
    double area = ((a + b) / 2) * h;

    cout << "Периметр трапеции: " << perimeter << endl;
    cout << "Площадь трапеции: " << area << endl;

    return 0;
}