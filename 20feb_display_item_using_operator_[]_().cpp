//wap to store and display 5 int value  in a vector 
#include<iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include<list>
using namespace std;

int main()
{
    vector <int> v{1,2,3,4,5};
    for(int i=0;i<v.size();i++){
      //  cout<<v[i]<<" "; //works fine
     // cout<<v.operator[i]<<" "; //gives error 
     cout<<v.operator[](i)<<" ";//operator overload in stl ,work same as cout<<v[i]
    }

    return 0;
}
