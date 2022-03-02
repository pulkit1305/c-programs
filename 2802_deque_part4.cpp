//wap to insert a new value in deque using insert() the index position given by user 
#include <iostream>
#include<deque>
using namespace std;
int main()
{
    system ("cls");
    deque <int> d;
    int idx,nv;
    for(int i=1;i<=10;i++)
        d.push_back(3*i); //push element from rear end 
    cout<<"the element in deque are ";
    
    for(auto i: d)
        cout<<i<<" ";
    cout<<endl;
    cout<<"enter the value you want to insert  ";
    cin>>nv;
    cout<<"enter the indext where value you want to insert  ";
    cin>>idx;
    if(idx>d.size())
    {   
        cout<<"idex out of bound";
        return 0;
    }
    else 
    {
        deque <int>::iterator it=d.begin();
        for(int f=0;f<d.size();f++)
        {
            if(f==idx)
                break;
            else
                it++;
        }
        it=d.insert(it,nv);//format 1 of insert()
        for(auto i: d)
        cout<<i<<" ";
        cout<<endl;    
    }
    return 0;
}