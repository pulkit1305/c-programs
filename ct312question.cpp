/*12. Ram and shiva are working as accountants in bank. They need to know all the
 arithmetic operations to verify the accounts. Since they are weak in mathematics, they
  found difficulty in doing such arithmetic operations. Help them to check accounts by 
  applying arithmetic operations including add, subtract, multiply and divide using class
   template.*/
#include<iostream>
#include <stdlib.h>
using namespace std;
template<class t>
class calculator
{
    int x,y;
    public:
   calculator(t a,t b)
    {x=a;y=b;}

    t add()
   { return (x+y);}
    t sub()
   { return (x-y);}
    t mul()
   { return (x*y);}
    t divide()
   { return (x/y);}
   void display()
   {
       cout<<"\n the sum = "<<add();
       cout<<"\n the sub = "<<sub();
       cout<<"\n the mul = "<<mul();
       cout<<"\n the divide = "<<divide();
    }
};
int main()
{
calculator <int> obj(1,2);
calculator <float> obj2(10.2,20.2);
obj.display();
obj2.display();
}

