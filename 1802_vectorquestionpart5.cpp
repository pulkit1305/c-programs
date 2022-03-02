/* WAP TO store five strings in a listofstrs variable of type list.
use push_back() function to add a string in listofstrs variables where
 the string is entered by user during program runtime
 display all the values of listofstrs.*/
 #include<iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include<list>
using namespace std;
int main()
{
        system ("cls");
        list <string> listofstrs;
       // int n=listofstrs.size();
        //cout<<"no of values in list are "<<n;
    string str;  
    char ch='y';
    while(ch=='y')
       {
            cout<<"enter a string "<<endl;
           cin>>str;
            //fflush(stdin);
            listofstrs.push_back(str);
            cout<<"do you want to continue y/n? ";
            cin>>ch;
        }
    vector <string> vecofstrs(listofstrs.begin(),listofstrs.end());//it will copy the
                                                            // values of lists into vector
    for(string i:vecofstrs) //this loop is for display 
        cout<<i<<endl;
        return 0;
}