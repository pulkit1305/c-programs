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
    int startidx,endidx;
    cout<<"enter an index to start deletion from ";
    cin>>startidx;
    cout<<"enter an index to end deletion upto ";
    cin>>endidx;
    v.erase(v.begin()+startidx,v.begin()+endidx); //important
    cout<<"remaining values in vector are "<<endl;
    for(int i:v)
        cout<<i<<" "<<endl;
     return 0;
}