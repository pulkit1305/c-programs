//wap to display elemnt of list using  crbegin() and crend().
#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    list <int> l{10,20,30,40};
    cout<<"element of list are ";
     for(auto it=l.crbegin();it!=l.crend();it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}