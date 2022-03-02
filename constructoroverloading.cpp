#include <iostream>
#include <stdlib.h>
using namespace std;
class area
{
    int ar,side;
    public:
    area(float r)
    {
        ar=3.14*r*r;
        cout<<"the area of circle is :"<<ar;

    }
    area(int l,int b)
    {
        ar=l*b;
        cout<<"the area of rectangle is :"<<ar;

    }
    area()
    {
        cout<<"\nenter the side ";
        cin>>side;
        ar=side*side;
        cout<<"the area of square is :"<<ar;

    }

};

int main()
{
    system("cls");
   float r;
    int l,w,side;
    cout<<"take input radius";
    cin>>r;
    area obj(r);
    cout<<"\ntake input length and writh ";
    cin>>l>>w;
    area obj2(l,w);
    area obj3;

    return 0;
}
