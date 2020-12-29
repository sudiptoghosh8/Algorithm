#include<iostream>
using namespace std;

int main()
{
	int a[2000],n,x,i,flag=0;
	cout<<"Enter test case : ";
	cin>>n;
	cout<<"Enter array = ";

	for(i=0;i<n;++i)

        cin>>a[i];

	cout<<"Enter search array : ";
	cin>>x;

	for(i=0;i<n;++i)
	{
		if(a[i]==x)
		{
			flag=1;
			break;
		}
	}

	if(flag)
		cout<<"position = "<<i;
	else
		cout<<"search not found";

		return 0;
}
