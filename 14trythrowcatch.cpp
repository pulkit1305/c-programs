#include<iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    system("cls");
    int x,y;
    try
    {
    cout<<"enter x y";
    cin>>x>>y;
    if (y<=0)
        throw "the value of y is zero";
    }  catch(exception &e){
        cout<<"an exception occured";
        }  
    return 0;
}