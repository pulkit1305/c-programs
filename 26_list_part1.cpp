//WAP to create a list and display its element 
#include<iostream>
#include <stdlib.h>
#include<list>
using namespace std;
int main()
{
    system("cls");
    list <int> l{10,20,30,40,50};
    cout<<"the values in list are ";
    for(auto i:l)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}
