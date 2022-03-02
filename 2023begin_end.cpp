// program to scan and dispay all elemnt of vector using begin() and end() vector functions in a tradision way.
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
    for(auto i=v.begin();i!=v.end();i++)
        cout<<*i<<" "<<endl;//* to print first to end element
    return 0;
}