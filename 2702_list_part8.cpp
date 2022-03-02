//wap to display element of list using cbegin() and cend()
#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    list <int> l{10,20,30,40};
    cout<<"first elemrent of list is "<<*l.cbegin()<<endl;//*becouse it is iterator 
    cout<<"end elemrent of list is "<<*l.cend();
    cout<<"\nall element of lista are ";
    for(auto it=l.cbegin();it!=l.cend();it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}