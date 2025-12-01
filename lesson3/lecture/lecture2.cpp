#include <iostream>
#include <cmath>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    double objX, objY, towerX, towerY, radius;
    cout << "Введите положение объекта (objX objY)" << endl;
    cin >> objX >> objY;
    cout << "Введите положение башни (towerX towerY)" << endl;
    cin >> towerX >> towerY;
    cout << "Введите радиус поражения башни" << endl;
    cin >> radius;

    double dx = objX - towerX,
           dy = objY - towerY;
    double distance = sqrt(pow(dx, 2) + pow(dy, 2));

    if (distance < radius) {
        cout << "ударить" << endl;
    } else {
        cout << "скучать" << endl;
        cout << "расстояние: " << distance << endl;
    }
}