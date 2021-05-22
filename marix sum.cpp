#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,n,i,j;
    int a[10][10], b[10][10], sum[10][10];
    cout<<"Enter the row number : ";
    cin>>r;

    cout<<"Enter the collum number : ";
    cin>>c;
    cout<<"Enter first Matrix : "<<endl;

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
           cin>>a[i][j];
        }
    }


    cout<<"Enter Scond Matrix : "<<endl;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
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
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            cout<<"\t"<<b[i][j];
        }
        cout<<endl;
    }


   cout<<"Addition is : "<<endl;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
           sum[i][j] = a[i][j] + b[i][j];
           cout<<"\t"<<sum[i][j];
        }
        cout<<endl;
    }


return 0;
}
