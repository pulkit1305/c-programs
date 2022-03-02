//wap to remove the elemnts of vector from a given index usin function erase().
//syntax= erase(begin(),begin()+idx) .. it will erase values upto given index from vector 
//         erase(begin(),begin()+idx)
#include<iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include<list>
using namespace std;

int main()
{
    system("cls");
    vector <int> v{10,20,30,40,50};
    for(int i:v)
        cout<<i<<" "<<endl;
    int idx;
    cout<<"enter an index to delete value upto that index ";
    cin>>idx;
    v.erase(v.begin(),v.begin()+idx);
    cout<<"remaining values in vector are "<<endl;
    for(int i:v)
        cout<<i<<" "<<endl;
     return 0;
}

