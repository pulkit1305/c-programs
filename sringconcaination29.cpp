#include <iostream>
using namespace std;
#include <stdlib.h>
#include <string.h>
int main()
{
    system("cls");
    char str1[100],str2[100],str3[100];
    cout<<"ENTR Two STRING ";
    cin>>str1>>str2;
    int l1,l2;
    l1=strlen(str1);
    l2=strlen(str2);
    int i=0;
    while (i<l1){
        str3[i]=str1[i];
        i++;
    }
    int j=0;
    while (i<l1+l2){
        str3[i]=str2[j++];
        i++;
        
    }
    str3[l1+l2]='\0';
    cout<<str3;
    return 0;
}

