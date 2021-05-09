//
//  main.cpp
//  2-2
//
//  Created by Даниил Шуриков on 09.05.2021.
//

#include <iostream>
#include <cmath>

using namespace std;

const int a = 20.3;
double x, y;

void input()
{
    std::cout << "Введите x: ";
    cin >> x;
}

void solution()
{
    if (x > 1)
    {
        y = log(x + 1);
        std::cout << "Значение y равно - " << y << endl;
    }
    else if (x <= 1)
     {
        y = sin(2) * sqrt(abs(a * x));
        std::cout << "Значение y равно - " << y << endl;
     }
}
int main()
{
    input();

    solution();


    return 0;
}
