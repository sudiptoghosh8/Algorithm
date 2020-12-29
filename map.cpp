#include<bits/stdc++.h>
#include<vector>
#include<map>

/* vector<int>a
    v.size();
    v.push_back(a);
    v.back();
    v.pop_back();
    */
using namespace std;
vector<int>v;
int main()
{
    int a,b,c,d,n,i,j,x,y;
    while(scanf("%d",&n)==1)
    {
        v.clear();
        for(i=1; i<=n; i++)
        {
            scanf("%d",&a);
            v.push_back(a);

        }

for(i=v.size()-1;i>=0;i--)
{
    cout<<"vector lf = "<<v[i]<<" "<<endl;
}
cout<<endl;
for(i=0;i<v.size();i++)
{
    cout<<" vector fl = "<<v[i]<<" "<<endl;
}



cout<<endl;

        for(i=1; i<=n; i++)
        {

            x=v.size();
            a=v.back();
            v.pop_back();
            cout<<"size = "<<x<<" ";
            cout<<"back = "<<a<<" "<<endl;
        }
cout<<endl;
//short
sort(v.begin(),v.end());
for(i=0;i<n;i++)
{
    cout<<"sort = "<<v[i]<<" "<<endl;
}
cout<<endl;








    }

    return 0;
}
