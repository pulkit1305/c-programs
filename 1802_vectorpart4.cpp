//wap to create two vectors of int types and display their value in the folling  format 
//v1{1,2,3}
//v2{4,5,6} and display value in the following format.
#include<iostream>
#include <stdlib.h>
#include <vector>
#include <string>
using namespace std;
int main()
{
        system ("cls");
        vector <int> v1{1,2,3};
        vector <int> v2{4,5,6};
        for(auto&& e1: v1) //e1 acting as key and v1 is set of value and ":" is use to bind key with value's set
        {
            for(auto&& e2: v2) //e2 acting as key to v2
            {
                    cout<<e1<<","<<e2<<endl;
            }
        }
        return 0;
}