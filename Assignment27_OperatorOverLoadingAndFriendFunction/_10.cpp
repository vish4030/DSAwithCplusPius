/*
10.Class Matrix { 
    int a[3][3]; 

  Public: 
    //methods; 
    
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator overloading)

*/

#include<iostream>
using namespace std;


class Matrix {
    int a[3][3];

   public:
    void setData();
    void showData()
    {
   
      cout<<"|"<<a[0][0]<<" | "<<a[0][1]<<" | "<<a[0][2]<<"|"<<endl;
      cout<<"|"<<a[1][0]<<" | "<<a[1][1]<<" | "<<a[1][2]<<"|"<<endl;
      cout<<"|"<<a[2][0]<<" | "<<a[2][1]<<" | "<<a[2][2]<<"|\n"<<endl;
  
    }

   friend Matrix operator+ (Matrix, Matrix );
     
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

 Matrix operator+ (Matrix M, Matrix N)
{
    int i,j;
    Matrix tmp;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
         tmp.a[i][j] = M.a[i][j] + N.a[i][j];
    }
    
    return tmp;
}


int main()
{
    Matrix M,N,X;
    cout<<"Enter (3x3) matrices: ";
    M.setData();
    cout<<"Enter (3x3) matrices: ";
    N.setData();
    X = M + N;
    M.showData();
    N.showData();
    X.showData();
}