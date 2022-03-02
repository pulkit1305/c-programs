#include<iostream>
#include <stdlib.h>
using namespace std;
template<class t>
class arithmatic
{
    t v1,v2,result;
    public:
    arithmatic(t x,t y)
    {
        v1=x;
        v2=y;
    }
    t sum()
    {
        return v1+v2;
    }
    t product()
    {
        return v1*v2;
    }
};
int main()
{
    system("cls");
    arithmatic <double> obj(2.4,20.56);
    cout<<"\nThe sum is ="<<obj.sum();
    cout<<"\nThe product is ="<<obj.product()<<endl;
    return 0;

}
