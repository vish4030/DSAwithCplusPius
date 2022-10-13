/*
1. Define a class Complex with appropriate instance variables and member functions.
 Define following operators in the class:
  a. + 
  b. - 
  c. * 
  d. ==
  */

 #include<iostream>
 using namespace std;

 class Complex {
    private:
     int a, b;

    public:
     Complex() {a =0; b=0;}
     Complex(int x, int y)
     { a = x; b = y;}
     void showData()
     {
        cout<<a<<" + "<<b<<"i\n";
     }

     Complex operator+ (Complex c)
     {
        Complex tmp;
        tmp.a = a+c.a;
        tmp.b = b+c.b;
        return tmp;
     }

     Complex operator- (Complex c)
     {
        Complex tmp;
        tmp.a = a-c.a;
        tmp.b = b-c.b;
        return tmp;
     }

     Complex operator* (Complex c)
     {
        Complex tmp;
        tmp.a = (a*c.a) - (b*c.b);
        tmp.b = (a*c.b) + (b*c.a);
        return tmp;
     }

     bool operator== (Complex c)

     {
        if(c.a == a && c.b == b)
         return true;
        else
         return false; 
     }

 };

 int main()
 {
    Complex c1(2,4), c2(4,2),c3,c4,c5;
    c3 = c1 + c2;
    c4 = c1 - c2;
    c5 = c1 * c2;
   //  c1.showData();
   //  c2.showData();
   //  c3.showData();
   //  c4.showData();
   //  c5.showData();
    c4 == c5;

 }
