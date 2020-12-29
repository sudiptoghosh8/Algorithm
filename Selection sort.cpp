#include<iostream>
using namespace std;
int main()
{
    cout<<"///////////////////SELECTION-SORT///////////////////"<<endl;
    cout<<endl;
    int a[100];
    int i,j,n,index_min, temp;
    cout<<"Enter Length of array : ";
    cin>>n;
    cout<<endl;
    cout<<"Enter num : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n-1;i++)
    {
        index_min =i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[index_min])
            {
                index_min=j;
            }

        }
        if(index_min!=i)
        {
            temp=a[i];
            a[i]=a[index_min];
            a[index_min]=temp;

        }

    }
    cout<<endl;
    cout<<"................Result.............."<<endl<<endl;
cout<<"Sorted data are : ";
    for(i=0;i<n;i++)
    {cout<<"temp "<<temp<<"\t";

        cout<<a[i]<<"\t";
    }

    return 0;
}
