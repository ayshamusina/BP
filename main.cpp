// программа, которая считает интеграл
// 1.выбрать функцию (sin x, cos x, x, x^2) 2.выбрать метод интегриования 3.выбрать шаг инт-ия и диапазона 4.интегрировать (получить рез-т) 5.выход

using namespace std;
#include <iostream>



int main() {
    int ch;
    cout << "What will we do?";
    cin >> ch;
    switch (ch) {
        case 1:
            //выбрать функцию
            break;
        case 2:
            //выбрать метод
            break;
        case 3:
            //выбрать шаг и диапазон
            break;
        case 4:
            //интегрировать
            break;
        case 5:
            return 0;
            break;
            
        default:
            cout << "Choose correct number!";
            break;
    }
}
