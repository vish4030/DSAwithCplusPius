/*
8. Consider a class Matrix
Class Matrix { 
     int a[3][3];

    Public:
     //methods;
      
};
Overload the - (Unary) should negate the numbers stored in the object.

*/

#include<iostream>
using namespace std;


class Matrix {
    int a[3][3];

   public:
    void setData();
    void showData()
    {
    cout<<a[0][0]<<"   "<<a[0][1]<<"   "<<a[0][2]<<endl;
    cout<<a[1][0]<<"   "<<a[1][1]<<"   "<<a[1][2]<<endl;
    cout<<a[2][0]<<"   "<<a[2][1]<<"   "<<a[2][2]<<"\n\n";
    }
    friend Matrix operator- (Matrix);
     
};

void Matrix :: setData()
{
    int i,j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
         cin>>a[i][j];
    }

}

Matrix operator- (Matrix M)
{
    Matrix tmp;
    int i,j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        tmp.a[i][j] = -M.a[i][j];
    }
    return tmp;
}

int main()
{
    Matrix M1, M2;
    cout<<"Enter (3x3) matrix: ";
    M1.setData();
    M1.showData();
    M2 = -M1;
    M2.showData();

}
