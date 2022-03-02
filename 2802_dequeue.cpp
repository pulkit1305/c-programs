//wap to insert element in a dequeue using push_back().
#include <iostream>
#include<deque>
using namespace std;
int main()
{
    system ("cls");
    deque <int> d;
    for(int i=1;i<=10;i++)
        d.push_back(3*i); //push element from rear end 
    cout<<"the element in deque are ";
    for(auto i: d)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}
