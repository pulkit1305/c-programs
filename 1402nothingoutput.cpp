#include<iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    system("cls");
    int x,y,res;
    try
    {
    cout<<"enter x y";
    cin>>x>>y;
    res=x/y;
       
    }  catch(exception &e){
        cout<<"an exception occured";
        }  
    return 0;
}