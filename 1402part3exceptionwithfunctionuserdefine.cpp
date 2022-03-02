#include<iostream>
#include <stdlib.h>
using namespace std;
double divisionzero(int x,int y)
{
        if (y==0)
            throw "division by zero error";
        else
            return x/y;
}
int main()
{
    system("cls");
    int x,y,res;
    try
    {
    cout<<"enter x y";
    cin>>x>>y;
    res=divisionzero(x,y);
    cout<<"the result is "<<res;
    }  catch(const char* message){
        cerr<<message<<endl;
        }  
    return 0;
}