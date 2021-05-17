//
//  main.cpp
//  1-2
//
//  Created by Даниил Шуриков on 17.05.2021.
//

#include <iostream>
#include <cmath>
//#include <Windows.h>
using namespace std;

double GetVolume(const double r, const double a);
double GetSquare(const double r, const double a);

int main() {
    //SetConsoleOutputCP(1251);
   // SetConsoleCP(1251);
    double r;
    double a;
    cout << "Введите радиус сферы и угол при вершине конуса (в радианах):\n";
    cin >> r;
    cin >> a;
    auto volume = GetVolume(r, a);
    auto square = GetSquare(r, a);
    cout << "Объем конуса равен: " << volume << endl;
    cout << "Полна площадь поверхности конуса равна: " << square;
}

double GetVolume(const double r, const double a) {
    const double pi = 3.141592653589793;
    auto volume = pi * pow(r, 3) * (1 + cos(a)) * pow(sin(2 * a), 2) / 3;
    return volume;
}

double GetSquare(const double r, const double a) {
    const double pi = 3.141592653589793;
    auto square = pi * pow(r, 2) * sin(2 * a) * (sin(2 * a) + 2 * cos(a));
    return square;
}
