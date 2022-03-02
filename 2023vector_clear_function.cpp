//wap to remove all element from vector using clear().
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
    for(int i:v)
        cout<<i<<" "<<endl;
    v.clear();//it will erase all eloement from vector 
    cout<<"now elements in vector are "<<endl;
     for(int i:v)
        cout<<i<<" "<<endl;
    return 0;
}
