
/*
4. Create a class Time which contains: 
- Hours 
- Minutes 
- Seconds
 Write a C++ program using operator overloading for the following:
  1.  = = : To check whether two Times are the same or not. 
  2.  >>  : To accept the time. 
  3.  <<  : To display the time
*/

#include<iostream>
using namespace std;


class Time {
    private:
     int hr, min, sec;

    public:
     Time () {hr=0; min=0; sec=0;}
     Time(int h, int m, int s) 
     {
        hr = h; min = m; sec = s;
        normalize();
     } 

     void normalize()
     {
        min = min + sec/60;
        sec = sec%60;
        hr = hr + min/60;
        min = min%60;
     }

     void operator== (Time t)
     {
        if(t.hr == hr && t.min == min && t.sec == sec)
          cout<<"Times are same\n";
        else 
          cout<<"Times are not same\n"; 
     }

     friend int operator<<(ostream &out, Time &t);
     friend int operator>>(istream &in, Time &t);

};

     int operator>> (istream &in, Time &t)
     {
        cout<<"Enter Time\n";
        cout<<"-----------------\n";
        cout<<"Enter Hours : ";
        in>>t.hr;
        cout<<"Enter Minutes : ";
        in>>t.min;
        cout<<"Enter Seconds : ";
        in>>t.sec;

        t.min = t.min + t.sec/60;
        t.sec = t.sec%60;
        t.hr = t.hr + t.min/60;
        t.min = t.min%60;
        return 0;
     }

     int operator<< (ostream &out, Time &t)
     {
        out<<"Time\n";
        out<<"Hours : "<<t.hr<<endl;
        out<<"Minutes : "<<t.min<<endl;
        out<<"Seconds : "<<t.sec<<endl;
        return 0;
     }


int main ()
{
    Time t1(4,50, 5),t2,t3;
    t1 == t2;
    cin>>t2;
    cout<<t1;
    cout<<t2;
   
}