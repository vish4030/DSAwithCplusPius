/*
5. Consider following class Numbers
class Numbers
{
int x,y,z; 
public: 
// methods
};
Overload the operator unary minus (-) to negate the numbers.
*/

#include<iostream>
using namespace std;


class Number {
    int x,y,z;

    public:
     Number(int a,int b, int c)
     { x = a; y = b; z = c;}

      void showData()
     {  cout<<"x: "<<x<<" y: "<<y<<" z: "<<z<<endl; }

     friend Number operator- (Number N);
   
};

 Number operator- (Number N)
     {
        Number tmp(0,0,0);
        tmp.x = -N.x;
        tmp.y = -N.y;
        tmp.z = -N.z;
        return tmp;
     }

int main()
{
    Number n1(2,3,4),n2(0,0,0);
    n1.showData();
    n2 = -n1;
    n2.showData();
}