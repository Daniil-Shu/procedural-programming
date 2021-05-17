//
//  main.cpp
//  1-3
//
//  Created by Даниил Шуриков on 17.05.2021.
//

#include <iostream>
using namespace std;

double GetDistance(const double a, const double f);

int main() {
    double a;
    double f;
    cout << "Введите количество совершенной работы (в МДж) и величину силы тяги (в кН):\n";
    cin >> a;
    cin >> f;
    const auto distance = GetDistance(a, f);
    cout << "Длина пройденного пути равна: " << distance << " м";
}

double GetDistance(double a, double f) {
    a = a * 1000000;
    f = f * 1000;
    const auto distance = a / f;
    return distance;
}

