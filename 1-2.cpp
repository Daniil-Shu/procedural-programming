//
//  main.cpp
//  1-2
//
//  Created by Даниил Шуриков on 17.05.2021.
//

#include <iostream>
#include <cmath>
using namespace std;

double GetVolume(const double r, const double a);
double GetSquare(const double r, const double a);

int main() {
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
    const double M_PI;
    auto volume = M_PI * pow(r, 3) * (1 + cos(a)) * pow(sin(2 * a), 2) / 3;
    return volume;
}

double GetSquare(const double r, const double a) {
    const double M_PI;
    auto square = M_PI * pow(r, 2) * sin(2 * a) * (sin(2 * a) + 2 * cos(a));
    return square;
}
