//arr1[]=1234 arr2[]=567 
//drsired output 1,5 1,6 1,7 2,5 2,6 2,7 and soon
#include<iostream>
#include <stdlib.h>
using namespace std;
int main()
{
        system ("cls");
    int arr1[4]={1,2,3,4};
    int arr2[3]={5,6,7};
    int arrayOneSize = sizeof(arr1)/sizeof(int);
    int arrayTwoSize = sizeof(arr2)/sizeof(int);
   
    for(int i=0;i<arrayOneSize;i++)
    {
        cout<<endl;
        for(int j=0;j<arrayTwoSize ;j++)
          {  cout<<arr1[i]<<","<<arr2[j];
            cout<<" ";
          }
           
    }
   
    return 0;
}
