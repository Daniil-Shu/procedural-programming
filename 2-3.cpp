//
//  main.cpp
//  2-3
//
//  Created by Даниил Шуриков on 09.05.2021.
//

#include <iostream>
#include <cmath>

using namespace std;

void Треугольник()
{
    cout << "Треугольник";
}
void Квадрат()
{
    cout << "Квадрат";
}
void Ромб()
{
    cout << "Ромб";
}
 void Прямоугольник()
{
    cout << "Прямоугольник";
}
int main()
{
  int input;
 
  cout<<"1. Треугольник\n";
  cout<<"2. Квадрат\n";
  cout<<"3. Ромб\n";
  cout<<"4. Прямоугольник\n";
  cout<<"5. Параллелорграмм\n";
  cout<<"Выберите фигуру: ";
  cin>> input;
  switch ( input )
  {
  case 1:
    cout << "S = (ah)/2 \n";
    break;
  case 2:
    cout << "S = a * и \n";
    break;
  case 3:
    cout << "S = (d1 * d2) / 2 \n";
    break;
  case 4:
    cout<<"S = (a * b) / 2 \n";
    break;
  case 5:
    cout<<"S = ah \n";
    break;
  default:
    cout<<"Ошибка\n";
    break;
  }
  cin.get();
}

