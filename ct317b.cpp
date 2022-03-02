/* . Raju wants to check whether the array index is correct or not.
•	Create a new class exception with the name ArrayException
•	Create a class IntArray, with the member function as  int getLength() to return length
 and int& operator[](const int index) to check the index and throw the new exception
*/
/*#include<iostream>
#include <stdlib.h>
#include<string> // all program have string data type and c also have
#include <string_view> // memory is not allocate again and again when same memory content is refrence 
using namespace std; 
class arrayexception
{
    
    public:
 string abc;  
};*/
#include <iostream>
#include <string>
#include<string_view>
using namespace std;
class arrayexception
{
    public:
    string merror;
    arrayexception(string error ):merror{error}
    {}
    const char* geterror()const{
        return merror.c_str();//it will return pointer to a string terminated by '\0'
    }
};

class intarray
{
    int mdata[3]{};
    public:
    intarray(){}
    int getlength()const{
        return 3;
    }
    int& operator[](const int index)
    {
        if(index<0 || index>=getlength())
            throw arrayexception{"index out of bound"};
        return mdata[index];
    }
};


int main()
{
    intarray arr;
    try{
        int value{arr[-1]};
    }catch(const arrayexception& exception){
        cerr<<"array out of bound exception occured ";
    }
   return 0;
}

