#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей и Измайлов Владислав 9КС-232" << endl;
    int i, n;
    int sum = 0;
    cout << "Введите число" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++){
        sum += i;
    }
    cout << "The sum (for): " << sum << endl;

    sum = 0;
    i = 1;
    while (i <= n) {
        sum = sum + i;
        i++;
    }
    cout << "The sum (while): " << sum << endl;

    sum = 0;
    i = 1;
    if (i < n){
        do {
            sum = sum + i;
            i++;
        } while(i<=n);
    }
    cout << "The sum (do while): " << sum << endl;

    sum = (n*(n+1))/2;
    cout << "The sum (no loop): " << sum << endl;


    return 0;
}