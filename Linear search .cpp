#include<iostream>
using namespace std;
int main()
{
    int i,n,t;
    int flag;
    int a[100];
    cout<<"Enter Test Case : ";
    cin>>n;

    cout<<"Enter array index : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }

    flag=0;
    cout<<"Enter Finding element : ";
    cin>>t;
    for(i=0;i<n;i++)
    {
        if(a[i]==t)
        {
            flag=1;
            break;
        }
        else
        {
            continue;
        }
    }
    if(flag)
    {
        cout<<"Find and Array Index = "<<i<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}
