//wap to delete an element from list using erase()
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
    list <int> ::iterator it=l.begin();
    l.erase(it);
    cout<<"now after erase list elemnt are ";
    for(auto i:l)
        cout<<i<<" ";
    return 0;
}
