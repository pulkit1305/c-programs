//wAp to store strings in a list called listsofstr and display all the words from 
//listsofstr using stl vector functions push_back()

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
        listofstrs.push_back("pulkit");
        listofstrs.push_back("manik");
        listofstrs.push_back("rahul");
        listofstrs.push_back("ram");
        listofstrs.push_back("sham");
    

        vector <string> vecofstrs(listofstrs.begin(),listofstrs.end());//it will copy the values of lists into vector
        for(string i:vecofstrs)
            cout<<i<<endl;
        return 0;
}