#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
     list <string> lst;
    string str;
    for(int i=1;i<10;i++){
        cout<<"enter a string ";
        getline(cin,str);
        lst.push_back(str);
    }
    cout<<"list elemnt are ";
    for(auto i:lst)
        cout<<i<<" ";
    cout<<endl;
    lst.reverse();
    cout<<"reverse list elemnt are ";
    for(auto i:lst)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}