#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜ 9˜˜-232" << endl;
    
    double a, b;

    cout << "˜˜˜˜˜˜˜ 2 ˜˜˜˜˜ " << endl;
    cin >> a >> b;

    cout << "˜˜˜˜˜: " << a + b << endl;
    cout << "˜˜˜˜˜˜˜˜: " << a - b << endl;
    cout << "˜˜˜˜˜˜˜˜˜˜˜˜: " << a * b << endl;
    cout << "˜˜˜˜˜˜˜: " << a / b << endl;

    cin.get();
    cin.get();
    
    return 0;
}