//wap to inisialise list with 10 elements using assign() function.
#include<iostream>
#include <stdlib.h>
#include<list>
using namespace std;
int main()
{
    system("cls");
    list <int> l;
    l.assign(2,100);// it accepts two arguments ie number of time a value to be repeated in list and value itself
    cout<<"values in list are ";
    for(auto i:l)
        cout<<i<<" ";
    cout<<endl;

    return 0;
}