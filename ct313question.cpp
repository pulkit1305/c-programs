/*Create a new exception for the following scenario
Ramar wants write a C++ program to throw if invalid file name is given
•	The file name length should be less than 6
•	It should start with # */
#include<iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main()
{
    char name[50];
    cout<<"enter name ";
    cin>>name;
    try
    {
        if( strlen(name)<=6 && name[0]=='#')
        { cout<<"the name is= "<<name<<" ITS VALID ";}
        else throw name;

    }
    catch(...)
    {
        cout<<"the name is = "<<name<<" ITS INVALID";
    }
    


}

