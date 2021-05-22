#include<bits/stdc++.h>
using namespace std;
int main()

{
    int c,r,c2,r2,m,n,p,q,i,j,k,sum=0;
    int a[10][10],b[10][10],multiply[10][10];
    cout<<"Enter number of row & column of first matrix : ";
    cin>>r;
    cin>>c;
    cout<<"Enter first Matrix : "<<endl;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
           cin>>a[i][j];
        }
    }

     cout<<"Enter number of row & column of second matrix : ";
    cin>>r2;
    cin>>c2;

    if(c!=r2)
    {
        cout<<"The matrices can't be multiplied with each other."<<endl;
    }

    else
    {

    cout<<"Enter Scond Matrix : "<<endl;
    for(i=1;i<=r2;i++)
    {
        for(j=1;j<=c2;j++)
        {
           cin>>b[i][j];
        }
    }



    cout<<"Entered first Matrix is : "<<endl;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
           cout<<"\t"<<a[i][j];
        }
        cout<<endl;
    }


    cout<<"Entered Second Matrix is : "<<endl;
    for(i=1;i<=r2;i++)
    {
        for(j=1;j<=c2;j++)
        {
            cout<<"\t"<<b[i][j];
        }
        cout<<endl;
    }



//multiplication Part
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r2;j++)
        {
            for(k=1;k<=c2;k++)
            {
                sum = sum + a[i][k]*b[j][k];
            }
            multiply[i][j] = sum;
            sum = 0;
        }
    }
//Result Part
    cout<<"Multiplication is : "<<endl;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c2;j++)
        {
           cout<<"\t"<<multiply[i][j];
        }
        cout<<endl;
    }
    }
return 0;
}
