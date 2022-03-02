// program to copy value of one vector to another using "operator=".
#include<iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include<list>
using namespace std;

int main()
{
    vector <int> v{1,2,3,4,5};
    vector <int> v1{9,8,7,6};
    for(int i:v)
        cout<<i<<" "<<endl;
    for(int j:v1)
        cout<<j<<" "<<endl;
    cout<<"\nNOW THE VALUE ARE "<<endl;
    v1.operator=(v);
    for(int i:v)
        cout<<i<<" "<<endl;
    for(int j:v1)
        cout<<j<<" "<<endl;
    return 0;
}