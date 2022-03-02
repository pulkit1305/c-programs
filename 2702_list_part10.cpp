//wap to determine and display wheather a list is empty or not using empty()
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    list <int> l{10,20,30,40};
    list <int> l2;
    if(l.empty()==0)
        cout<<"list is not empty\n";
    else
        cout<<"empty";
    if(l2.empty()==0)
        cout<<"\nlist is not empty";
    else
        cout<<" list 2 empty";
    
    return 0;
}