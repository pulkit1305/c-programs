#include <iostream>
#include <stdlib.h>
using namespace std;
class assignment
{
    int *ptr;
    public:
    assignment(int i=0)
    {
        ptr= new int(i);
    }
    void setvalue(int i)
    {
      *ptr=i;
    }
    void display()
    {
        cout<<*ptr<<endl;
    }

};
int main()
{ 
    system("cls");
    assignment obj1(5);
     assignment obj2;
     obj2=obj1;
     obj2.display();
     obj1.setvalue(10);
     obj1.display();
     obj2.display();
}
