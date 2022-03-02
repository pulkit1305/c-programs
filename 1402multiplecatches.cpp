#include<iostream>
#include <stdlib.h>
#include <string>
using namespace std;
int main()
{
    system("cls");
    string str;
    cout<<"enter a string in uppercase ";
    getline(cin,str);
    try
    {
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]>='a' && str[i]<='z')
                throw str[i];
            if(str[i]>='0' && str[i]<='9')
                throw int(str[i]);
        }
            
    }
    catch(int i)
    {
        cout<<"integer exception ";
    }
    catch(char i)
    {
        cout<<"char exception ";
    }
    
    return 0;
}