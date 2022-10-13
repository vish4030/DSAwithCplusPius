/*
9. Consider the following class mystring
Class mystring { 
    char str [100];
 Public: 
   // methods 
};
Overload operator “!” to reverse the case of each alphabet
 in the string (Uppercase to Lowercase and vice versa).

*/

#include<iostream>
#include<string.h>
using namespace std;


class Mystring {
    char str[100];

   public:
     Mystring () { strcpy(str,"");}
     void setData()
     { cin.get(str,100);  } 

     void showData()
     { cout<<str<<endl;; }

     friend Mystring operator! (Mystring);

};

Mystring operator! (Mystring S)
{
  int i;
  Mystring tmp;
  for(i=0; S.str[i] !='\0'; i++)
  {
    if(S.str[i] <= 122 && S.str[i] >= 97)
    {
      S.str[i] = S.str[i] -32;
    }
    else if(S.str[i] <= 90 && S.str[i] >= 65)
      S.str[i] = S.str[i] +32;

  }
  return S;
}

int main()
{
    Mystring S,S1;
    cout<<"Enter String: ";
    S.setData();
    S.showData();
    S1 = !S;
    S1.showData();
    S1 = !S1;
    S1.showData();
}