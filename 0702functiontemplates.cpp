/*template is the tool in c++ that help us in  passing diff types of values using the same
 function defination rather than writing multiple defination 
 
 ->c++ provides functions and class templates aswell .
 ->The key word = template and typename use to support template defination in c++
 ->In order to make template work the compiler at compile time makes diffrent copies 
 of function to enable it to work for different data types.
 -> The template is like a macro.
 
 MACRO Defination
 -> The macro is a piece of code in c++ that is replaced by the value of macro .
 A macro defination is begins with #define(preprocessor directive .
 The macro are not terminated by ;*/
#include<iostream>
#include <stdlib.h>
using namespace std;
template <typename t>
    t sum(t a,t b)
    {
       return a+b;
    }
int main()
{
    system("cls");
    int ans1;
    float ans2;
    ans1=sum(5,6);
    cout<<"\nINT SUM IS "<<ans1;
    ans2=sum(1.2,2.2);
    cout<<"\nFLOAT SUM IS "<<ans2<<endl;
    return 0;
}
 