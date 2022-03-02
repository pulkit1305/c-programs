//wap to insert element in a dequeue using push_front().
#include <iostream>
#include<deque>
using namespace std;
int main()
{
    system ("cls");
    deque <int> d;
    for(int i=1;i<=10;i++)
        d.push_front(4*i);
    cout<<"the element in deque are ";
    for(auto i: d)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}