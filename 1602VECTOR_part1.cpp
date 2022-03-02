#include<iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
int main()
{
    system ("cls");
    vector <int> vec(5);
    for(int i: vec)
        cout<<i<<endl;
    return 0;
}