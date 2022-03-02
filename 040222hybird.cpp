#include <iostream>
#include <stdlib.h>
using namespace std;
class vehicle
{
    char reg[10];
    public:
  void getdata();
  void showdata();

};
void vehicle::getdata()
{
    cout<<"enter reg no ";
    cin>>reg;
}
void vehicle::showdata()
{
    cout<<"the reg no is "<<reg;
}
class car:public vehicle
{   int enginecc;
    public:
    void cargetdata();
    void carshowdata();
};
void car::cargetdata()
{
    getdata();
    cout<<"enter enginecc ";
    cin>>enginecc;
}
void car::carshowdata()
{
    showdata();
    cout<<"the enginecc is "<<enginecc;
}
class sedan
{
    int bootspace;
    public:
    void sedangetdata();
    void sedanshowdata();
};
void sedan::sedangetdata()
{
  
    cout<<"enter bootspace ";
    cin>>bootspace;
}
void sedan:: sedanshowdata()
{
   
    cout<<"the boot space is "<<bootspace;
}
class suv:public car,public sedan
{
int height;
public:
void suvgetdata();
void suvshowdata();

};
void suv::suvgetdata()
{
    cargetdata();
    sedangetdata();
    cout<<"enter height ";
    cin>>height;
}
void suv::suvshowdata()
{
    carshowdata();
    sedanshowdata();
    cout<<"the height of suv is"<<height;
}
int main()
{
    system("cls");
    suv obj;
    obj.suvgetdata();
    obj.suvshowdata();
    return 0;
}
