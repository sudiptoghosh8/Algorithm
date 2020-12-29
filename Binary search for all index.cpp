#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[100];
    int n,i,t,mid,high,low,flag,key;
    cout<<"Test case : ";
    cin>>n;
    cout <<"Enter Array Index Sorting : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    cout<<"Enter Key value : ";
    cin>>key;
    low=1;

    high=n;
    flag=0;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]<key)
        {
            low=mid+1;
        }
        else if(a[mid]>key)
        {
            high=mid-1;
        }
        else{
            flag=1;
            cout<<"Get the value on Index : "<<mid<<endl;
            break;
        }
    }

    if(flag==0)
    {
        cout<<"Dont Get it";
    }



return 0;
}
