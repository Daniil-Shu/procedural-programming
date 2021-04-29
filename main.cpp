//
//  main.cpp
//  1-2
//
//  Created by Даниил Шуриков on 29.04.2021.
//

#include <iostream>
#include <math.h>

using namespace std;
class Calculate
{
  int r,h ;

public:
    void getdata()
    {
        cout<<"\nВведите радиус и высоту";
        cin>>r>>h;

    }
    void Surfacearea()
    {
            float s;
        s = 3.14 * r * (r + h);
        cout<<"\nПолная поверхность конуса="<<s;
    }
   
    void volume()
    
    {
        float v;
        v = (3.14 * r * r * h)/3;
     cout<<"\nОбъёем конуса="<<v;
    }

};
Calculate a1,a2,g;
int main()
{
g.getdata();
    a1.getdata();
    a2.getdata();
a1.Surfacearea();
a2.volume();
}
