#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double a;
    cout << "Введите длину ребра куба: ";
    cin >> a;

    double face_area = a * a;
    double surface_area = 6 * face_area;
    double volume = a * a * a;

    cout << "Площадь грани: " << face_area << endl;
    cout << "Площадь полной поверхности: " << surface_area << endl;
    cout << "Объем: " << volume << endl;

    return 0;
}