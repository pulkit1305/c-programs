//wap to display element of a list in s reverse order using functions rbegin() and rend().
//rbegin()
#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    list <int> l{10,20,30,40};
    cout<<"list elemnt are ";
    for(auto i:l)
        cout<<i<<" ";
    cout<<endl;
    cout<<"reversed list elemnt are ";
    for(auto it=l.rbegin();it!=l.rend();it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}