//wap to insert a vector in deque using insert()
#include <iostream>
#include<deque>
#include<vector>
using namespace std;
int main()
{
    system ("cls");
    deque <int> d;
    int idx,nv,rep;
    for(int i=1;i<=10;i++)
        d.push_back(3*i); //push element from rear end 
    cout<<"the element in deque are ";
    for(auto i: d)
        cout<<i<<" ";
    cout<<endl;
    cout<<"values in vector ";
    vector <int> v(3,10);
    for(auto i: v)
        cout<<i<<" ";
    cout<<endl;
    deque <int>::iterator it=d.begin();
    d.insert(it,v.begin(),v.end());// it will insert vector value to deque at it index
    cout<<"now elemts in deque along with vector values ";
    /*for(it=d.begin();it!=d.end();it++)
        cout<<*it<<" ";
    cout<<endl;*/
    it=d.begin();
    while (it!=d.end())
    {
       cout<<*it<<" ";
    it++;
    }cout<<endl;
    return 0;
}