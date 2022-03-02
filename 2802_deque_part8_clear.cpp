//wap to remove all elemnt in deque using clear().
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
        if(d.size()!=0)
        {
            cout<<"the element in deque are ";
            for(auto i: d)
                cout<<i<<" ";
            cout<<endl;
        }
    d.clear();
    if(d.size()!=0)
    {
    for(auto i: d)
        cout<<i<<" ";
    cout<<endl;
    }
    else 
        cout<<"sorry deque is empty ";
    return 0;
}