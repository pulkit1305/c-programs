//wap to insert an elemnt in list 
//make use of insert() for the purpose 
// we use iteraator becouse list use concept of linked list 
#include<iostream>
#include <stdlib.h>
#include<list>
using namespace std;
int main()
{
    system("cls");
    list <int> l{10,4,69,78};
    int nv,idx;
    cout<<"values in list are ";
    for(auto i:l)
        cout<<i<<" ";
    cout<<endl;
    cout<<"enter newvalue to insert ";
    cin>>nv;
    cout<<"enter index to insert at ";
    cin>>idx;
    list <int> ::iterator i=l.begin();// it will initialize iterator with l.begin() ie first elment of list 
    advance(i,idx); // i ko index me le jaega 
    l.insert(i,nv);//to inser nv at i index;
    cout<<"values in list are ";
    for(auto i:l)
        cout<<i<<" ";
    return 0;
}