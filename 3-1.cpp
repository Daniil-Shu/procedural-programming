//
//  main.cpp
//  3-1
//
//  Created by Даниил Шуриков on 20.05.2021.
//

#include <iostream>
#include <cmath>

using namespace std;

double GetValue(const double x);

int main()
{
    double x = 0;
    for (x; x < 0.85; x+=0.05)
    
    {
        double y = GetValue(x);
        cout << "y = " << y << '\n';
    }
}
        double GetValue(double x)
{

    return tan(x) - 1 / 3 * pow(tan(x), 3) + 1 / 5 * pow(tan(x), 5) - 1 / 3;
}
