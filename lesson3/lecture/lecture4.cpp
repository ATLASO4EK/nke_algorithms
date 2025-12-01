#include <iostream>
#include <cmath>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "Выполнил Кравченко Алексей 9КС-232" << endl;
    
    double wall_x = 3, wall_y = 5, wall_h = 10;
    double player_h = 5, player_w = 1;
    double player_x, player_y;

    cout << "Введите положение игрока (player_x player_y)" << endl;
    cin >> player_x >> player_y;

    if (player_x > wall_x || 
        player_y+player_h < wall_y || 
        player_y > wall_y + wall_h ||
        player_x + player_w < wall_x) 
    {
        cout << "может двигаться" << endl;
    } 
    else 
    {
        cout << "не может двигаться" << endl;
    }
}