//wap to insert a new value in deque using insert() in begining 
#include <iostream>
#include<deque>
using namespace std;
int main()
{
    system ("cls");
    deque <int> d;
    int nv;
    for(int i=1;i<=10;i++)
        d.push_back(3*i); //push element from rear end 
    cout<<"the element in deque are ";
    
    for(auto i: d)
        cout<<i<<" ";
    cout<<endl;
    cout<<"enter the value you want to insert  ";
    cin>>nv;
    
    if(idx>d.size())
    {   
        cout<<"idex out of bound";
        return 0;
    }
    else 
    {
        deque <int>::iterator it=d.begin();
        it=d.insert(it,nv);//format 1 of insert()
        for(auto i: d)
        cout<<i<<" ";
        cout<<endl;    
    }
    return 0;
}