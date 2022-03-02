//wap menu driven program to display  various kind of operation on vector 
#include<iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include<list>
using namespace std;
vector <int> v{1,2,3,4,5};

void sumback()
{
    
    int sum=0;
    for(int i:v)
        cout<<i<<" "<<endl;
    for(int j:v)
    {   
        sum+=v.back(); 
        v.pop_back(); 
    }
     cout<<"\nsum of poped element = "<<sum;
     cout<<"\nnow the values are  "<<endl;
      for(int i:v)
        cout<<i<<" "<<endl;
}
void op()
{
    
    cout<<"\nthe result is= ";
    for(int i=0;i<v.size();i++){  
     cout<<v.operator[](i)<<" ";
    }
}
void copyit()
{
    
    vector <int> v1{9,8,7,6};
    for(int i:v)
        cout<<i<<" "<<endl;
    cout<<"/////\n";
    for(int j:v1)
        cout<<j<<" "<<endl;
    cout<<"\nNOW THE VALUE ARE\n "<<endl;
    v1.operator=(v);
    for(int i:v)
        cout<<i<<" "<<endl;
    cout<<"/////\n";
    for(int j:v1)
        cout<<j<<" "<<endl;
}
void clearit()
{
    
    for(int i:v)
        cout<<i<<" "<<endl;
    v.clear();
    cout<<"\nnow elements in vector are "<<endl<<"\t\tempty";
     for(int i:v)
        cout<<i<<" "<<endl;
}
void forloopbe()
{
    
    for(auto i=v.begin();i!=v.end();i++)
        cout<<*i<<" "<<endl;
}
void insertin()
{
    
    int nv,idx;
    for(int i:v)
        cout<<i<<" "<<endl;
    cout<<"\nenter new value ";
    cin>>nv;
    cout<<"\nenter index";
    cin>>idx;
    v.insert(v.begin()+idx,nv);
    cout<<"\nnow the values are "<<endl;
      for(int i:v)
        cout<<i<<" "<<endl;
    
}
void popit()
{
   
    v.pop_back();
    cout<<"\nnow the values after deletion are "<<endl;
      for(int e:v)
        cout<<e<<" "<<endl;
}
void names()
{
     list <string> listofstrs;
    string str;  
    char ch='y';
    while(ch=='y')
       {
            cout<<"\nenter a string/names  "<<endl;
           cin>>str;
            //fflush(stdin);
            listofstrs.push_back(str);
            cout<<"do you want to continue y/n? ";
            cin>>ch;
        }
    vector <string> vecofstrs(listofstrs.begin(),listofstrs.end());
    for(string i:vecofstrs) 
        cout<<i<<endl;
}
void pairup()
{
     vector <int> v1{1,2,3};
        vector <int> v2{4,5,6};
        for(auto&& e1: v1) 
        {
            for(auto&& e2: v2) 
            {
                    cout<<e1<<","<<e2<<endl;
            }
        }
}

int main()
{
    system("cls");
    
     int x;
     while(x!=0){
 cout<<"\t\t########## MENU #############\n\n";
 cout << "PRESS 1 for pushback() \nPRESS 2 for pairing two numbers from diffrent vectors ";
 cout<<"\nPRESS 3 for insert()\nPRESS 4 for display vector element using begin and end in for loop";
 cout<<"\nPRESS 5 for erase everything from list\nPRESS 6 for copy element of one vector to another";
 cout<<"\nPRESS 7 for display using v.operator[](i)\nPRESS 8 for sum of pop elemet\nPRESS 0 for EXIT";
 cout<<"\n\tENTER here what is your choice = ";
 cin>>x;

    
    switch (x) {
    case 1:
        cout<<"############################################################################\n";
        cout << "\n \t[Choice is 1 ie  pushback() names]  ";
        names();
        break;
    case 2:
        cout<<"############################################################################\n";
        cout << "\n \t[Choice is 2 ie pairing two numbers from diffrent vectors]\n";
        pairup();
        break;
    case 3:
        cout<<"############################################################################\n";
        cout << "\n \t[Choice is 3 for insert()]\n";
         insertin();
        cout<<"[do you want to pop element from the vector\nIF yes the press 1 otherwise 0]";
        int n;
        cin>>n;
        if(n==1){
        while (1)
        {
             popit();
             cout<<"the remaining values are ";
             for(int e:v)
                cout<<e<<" "<<endl;
            cout<<"[do you want to pop element from the vector\nIF yes the press 1 otherwise 0]";
             cin>>n;
             if(n==0)
                break;
        }
        }
        break;
    case 4:
        cout<<"############################################################################\n";
        cout<<"\n \t[choice is 4 ie display vector element using begin and end in for loop]\n";
        forloopbe();
        break;
    case 5:
        cout<<"############################################################################\n";
        cout<<"\n \t[your coice is 5 ie erase everything from list]\n";
        clearit();
        break;
    case 6:
        cout<<"############################################################################\n";
        cout<<"\n \t[your coise is copy element of one vector to another]\n";
        copyit();
        break;
    case 7:
        cout<<"############################################################################\n";
        cout<<"\n \t[your coise is v.operator[](i)]\n";
        op();
        break;
    case 8:
        cout<<"############################################################################\n";
        cout<<"\n \t[your choise is sum of pop elemet]\n";
        sumback();
        break;
    }
     }
    return 0;
}