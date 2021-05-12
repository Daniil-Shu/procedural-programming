//
//  main.cpp
//  2-1
//
//  Created by Даниил Шуриков on 29.04.2021.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
  int Day;
  string Week[7] = { "Понедельник\n", "Вторник\n", "Среда\n", "Четверг\n", "Пятница\n", "Суббота\n", "Воскресенье\n" };
  cout << "Введите день недели: ";
  cin >> Day;
  while (Day > 7)
  {
    Day -= 7;
  }
  cout << Week[Day - 1];
  

int Number;
string Month[12] = { "Январь\n", "Февраль\n", "Март\n", "Апрель\n", "Май\n", "Июнь\n", "Июль\n", "Август\n", "Сентябрь\n", "Октябрь\n", "Ноябрь\n", "Декабрь\n"};
cout << "Введите месяц: ";
cin >> Number;
while (Number > 12)
{
    Number -= 12;
}
    cout << Month[Number - 1];
    return 0;
}
