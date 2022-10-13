/*
6. Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings. 
b) == to compare 2 strings.
*/

#include<iostream>
#include<string.h>
using namespace std;


class CString {
    private:
     char str[20]="";

    public:
     CString () {strcpy(str, "");}

     void setData() {  cin.get(str,20);}
     void show() {cout<<str<<endl; }

     friend CString operator+ (CString, CString);
   

     void operator== (CString C)
     {
        (strcmp(str, C.str)) ? cout<<"both string are NOT same\n" : cout<<"both sting are same\n";
     }
    
};

 CString operator+ (CString C1, CString C2)
     {
       strcat(C1.str, C2.str);
        return C1;

     }


int main()
{
    CString c1,c2,c3;
    cout<<"Enter String: ";
    c1.setData();
    cin.ignore();
    cout<<"Enter String: ";
    c2.setData();
    c3 = c1 + c2;
    c1.show();
    c2.show();
    c3.show();
    c1 == c2;
    return 0;
}