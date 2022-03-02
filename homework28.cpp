#include <iostream>
#include <string.h>
using namespace std;
class DanceAcademy
{
    int enrollno;
    char name[50];
    char styletype[50];
    float fee;

void chkfee()
{

    if(strcmp(styletype,"classical")==0) 
    {
    fee=10000; 
      
    }
    else if(strcmp(styletype,"western")==0) 
    {
        fee=800;
    }
    else if(strcmp(styletype,"freestyle")==0) 
    {
        fee=11000;
    }

    
}
public:
DanceAcademy()
{
    fee=0.0;
}
void enrollment()
{
    cout<<"enter enrollno: ";
    cin>>enrollno;
    cout<<"enter  name: ";
    cin>>name;
     cout<<"enter   styletype: ";
     cin>> styletype;
     chkfee();

}
void display ()
{
cout<<"\nenrollno is = "<<enrollno;
cout<<"\nname is  = "<<name;
cout<<"\nstyletype is = "<<styletype;
cout<<"\nthe fee is = "<<fee;
}
};
int main()
{
   DanceAcademy obj;
   obj.enrollment();
   obj.display () ;
   return 0;
}