//wap to find out sum of values that have been poped from vector 
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
    int sum=0;
    for(int i:v)
        cout<<i<<" "<<endl;
    for(int j:v)
    {   
        sum+=v.back(); // it will return last element of vector 
        v.pop_back(); //automatically the last element will be deleted 
    }
     cout<<"\nsum of poped element = "<<sum;
     cout<<"\nnow the values are  "<<endl;
      for(int i:v)
        cout<<i<<" "<<endl;
    return 0;
}