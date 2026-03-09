#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "Практическая работа 5" << endl << "Выполнил Кравченко Алексей 9КС-232" << endl;
   
    string name;
    cout << "Введите ваше имя: ";
    cin >> name;

    cout << "Здравствуйте, " << name << "!" << endl;

    double w1, h1, w2, h2;
    cout << "Введите ширину и высоту первого (большего) прямоугольника: " << endl;
    cin >> w1 >> h1;
    cout << "Введите ширину и высоту второго (меньшего) прямоугольника: " << endl;
    cin >> w2 >> h2;

    double S1 = w1 * h1;
    double S2 = w2 * h2;
    double S = S1 - S2;

    cout << "Площадь фигуры, образованной вырезанием второго прямоугольника из первого: " << S << endl;

    cout << "Спасибо за использование моей программы, " << name << "!" << endl;

    return 0;
}