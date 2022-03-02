//diff b/w throw and int 
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
    if(y<=0)
        throw y;
    else
    {
        res=x/y;
        cout<<"the result is "<<res;
    }  
    }  catch(exception &e){
        cout<<"an exception occured";
        }  
    return 0;
}