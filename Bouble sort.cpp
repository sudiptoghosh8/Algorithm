#include<iostream>
using namespace std;
int main()
{
    int data[100];
    int i,j,temp,n,flag;


    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>data[i];
    }
    for(i=0;i<=n-1;i++)
    {
        flag=0;
       for(j=0;j<n-1-i;j++)
       {
          if(data[j]>data[j+1])
        {
            temp=data[j];
            data[j]=data[j+1];
            data[j+1]=temp;
            flag=1;
        }
       }
       if(flag==0)
       {
           break;
       }



    }
    for(i=0;i<n;i++)
    {
        cout<<data[i]<<" ";
    }
}
