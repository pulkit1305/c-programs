#include <iostream>
#include <stdlib.h>
using namespace std;
class student 
{
    public:
    virtual void getdata()
    {
        cout<<"in get data of student base class";
    }
};
class graduate:public student 
{
    public:
    void getdata()
    {
        cout<<"in get data of graduate derived class";
    }
};
int main()
{
    system ("cls");
    graduate derived;
    student *base=&derived;
    base->getdata();
    return 0;

}

