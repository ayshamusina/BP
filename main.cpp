// программа, которая считает интеграл
// 1.выбрать функцию (sin x, cos x, x, x^2) 2.выбрать метод интегриования 3.выбрать шаг инт-ия и диапазона 4.интегрировать (получить рез-т) 5.выход

#include <iostream>

int func = 0; //функция
int method = 0; // метод
int h = 0; // число отрезков разбиения
float a = 0; // начало отрезка
float b = 1; // конец отрезка
int n,m;

int input () {
    int ch;
    std::cout << "What will we do?";
    std::cin >> ch;
    switch (ch) {
        case 1:
            std::cout << "Choose function you want to integrate: for x press 1, for x^2 press 2, for sin x press 3, for cos x press 4.\n";
            std::cin >> n;
            func = n;
            break;
        case 2:
            std::cout << "Now let's choose integration method. If you wanna try trapeziodal rule - press 1, for Riemann sum press 2.\n";
            std::cin >> n;
            method = n;
            break;
        case 3:
            std::cout << "It's time to choose integral interval.\n";
            std::cin >> n >> m;
            a = std::stof(n);
            b = std::stof(m);
            break;
        case 4:
            std::cout << "Hey, we also need number of subintervals.\n";
            std::cin >> n;
            h = n;
            break;
        case 5:
            return 0;
            break;
            
        default:
            std::cout << "Choose correct number!";
            break;
    }
}

int compute (std::function<double(double&)> f, double& start, double& end){
    if (n == 1){
        std::cout << "Trapeziodal rule:" << std::endl;
    double step = 0.1;
    double x = start + step;
    double prev_value = f(start);
    double value = 0;
    double result = 0;
    while (x<= end){
        value = f(x);
        result += ((value + prev_value) /2) * step;
        prev_value = value;
        x += step;
    }
    return result;
}
    else {
        std::cout << "Riemann sum:" << std::endl;
    double step = 0.1;
    double x = start;
    
    double result = 0;
    while (x<= end){
        result += f(x) * step;
        x += step;
    }
    return result;
}

int main() {
    input();
    compute()
    
}
    
// not ready yet

