#include<iostream>
#include <stdlib.h>
#include <vector>
#include <string>
using namespace std;
int main()
{      
    system ("cls");
    string arr[]={"one","two","three","four","five"};
    vector <string> strvec(arr,arr+sizeof(arr)/sizeof(string)); 
   // cout<<arr<<endl; // it will display base adress of arr
  // cout<<sizeof(arr); //size of arr in bytes (120)
 // cout<<sizeof(string); //in string that first element in arr (24)
    for(string i: strvec) 
    cout<<i<<endl;
    return 0;

    
}