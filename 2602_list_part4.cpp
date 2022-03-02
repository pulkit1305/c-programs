// wap to delete an elemnt from front
#include<iostream>
#include <stdlib.h>
#include<list>
using namespace std;
int main()
{
    system("cls");
    list <int> l;
    for(int i=1;i<10;i++)
        l.push_back(3*i);
    cout<<"list elemnt are ";
    for(auto i:l)
        cout<<i<<" ";
    cout<<endl;

    // deleting an element from front of list 
    l.pop_front();
    cout<<" list after pop_front() are ";
    for(auto i:l)
        cout<<i<<" ";
    cout<<endl;
    // deleting an elemnt ferom back 
     l.pop_back();
    cout<<" list after pop_back() are ";
    for(auto i:l)
        cout<<i<<" ";
    cout<<endl;

    return 0;
}
//wap to display list element in reverse order using function reverse
#include<iostream>
#include <stdlib.h>
#include<list>
using namespace std;
int main()
{
    system("cls");
    list <int> lst;
    
    for(int i=1;i<10;i++)
        lst.push_back(i);
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