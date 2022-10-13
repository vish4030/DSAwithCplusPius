/*

7. Define a C++ class fraction
class fraction { 
    long numerator; 
    long denominator; 
    
    Public:
     fraction (long n=0, long d=0); 
 }

Overload the following operators as member or friend:
a) Unary ++ (pre and post both) 
b) Overload as friend functions: operators << and >>.

*/

#include<iostream>
using namespace std;


class Fraction {
    private:
     int numerator;
     int denominator;

    public:
     Fraction() {numerator = 0; denominator = 0;}
     Fraction(long n, long d)
     { numerator = n; denominator = d;} 
      void show()
     { cout<<"Fraction : "<<numerator<<"/"<<denominator<<endl; }

     Fraction operator ++(int)
     {
        Fraction tmp ;
        tmp.numerator = numerator++;
        tmp.denominator = denominator++;
        return tmp;
        
     }

     friend Fraction operator++ (Fraction F);

     friend int operator<<(ostream &out, Fraction &f); 
     friend int operator>>(istream &in, Fraction &f);
    

    
};

int operator>> (istream &in, Fraction &F)
{
    cout<<"enter the numerator: ";
    in>>F.numerator;
    cout<<"enter denominator: ";
    in>>F.denominator;
}

int operator<<(ostream &out, Fraction &F)
{
    out<<"Fraction: "<<F.numerator<<"/"<<F.denominator<<endl;
}


Fraction operator++ ( Fraction F){
        Fraction tmp(0,0);
        tmp.numerator = ++F.numerator;
        tmp.denominator = ++F.denominator;
        return tmp;
}


int main()
{

    Fraction F1(3,4),F2,F3,F4;
    cout<<F1;
    F2 = F1++;
    cout<<F1;
    F3 = ++F2;
    cout<<F3;
    cin>>F4;
    cout<<F4;

    return 0;

}   