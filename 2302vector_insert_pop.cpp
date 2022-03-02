//wap to insert a value in vector at specified index 
//using insert(index,new value)
#include<iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include<list>
using namespace std;

int main()
{
    system("cls");
    vector <int> v{1,2,3,4,5};
    int nv,idx;
    for(int i:v)
        cout<<i<<" "<<endl;
    cout<<"enter new value ";
    cin>>nv;
    cout<<"enter index";
    cin>>idx;
    v.insert(v.begin()+idx,nv);
    cout<<"\nnow the values are "<<endl;
      for(int i:v)
        cout<<i<<" "<<endl;
    v.pop_back(); //automatically the last element will be deleted 
     cout<<"\nnow the values after deletion are "<<endl;
      for(int i:v)
        cout<<i<<" "<<endl;
    return 0;
}