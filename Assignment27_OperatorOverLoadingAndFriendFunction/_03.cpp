//3. Write a C++ program to add two complex numbers using operator overloaded by a friend function


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
     {  cout<<a<<" + "<<b<<"i\n"; }

     friend Complex operator+ (Complex, Complex);
        
 };

 Complex operator+ (Complex C1, Complex C2)
 {
    Complex tmp;
    tmp.a = C1.a + C2.a;
    tmp.b = C1.b +C2.b;
    return tmp;
 }

 int main ()
 {
    Complex c1(3,4),c2(1,2),c3;
    c3 = c1+c2;
    c1.showData();
    c2.showData();
    c3.showData();

 }