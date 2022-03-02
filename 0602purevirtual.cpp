#include <iostream>
#include <stdlib.h>
using namespace std;
class student 
{
    public:
    virtual void getdata()=0;
   
    
};
class graduate:public student 
{
    char name[50];
    public:
    void getdata()
    {
        cout<<"in get data of graduate derived class\n";
        cout<<"enter name: ";
        cin>>name;
    }
    void showdata()
    {
        cout<<"name is= "<<name;
    }

};
int main()
{
    system ("cls");
    graduate derived;// followig are the abstract class interfaces for invocation of function b/w base and the derived class
    
    student *base=&derived;
    base->getdata();
    cout<<endl;
    derived.showdata();
    return 0;

}
