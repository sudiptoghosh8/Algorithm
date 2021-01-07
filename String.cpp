//All string Work
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,result;
    getline(cin,s);
    getline(cin,s1);
    cout<<"substring : ";
    cout<<s.substr(5,10)<<endl;
    cout<<"Indexing : ";
    for(int i=0;i<s.size();++i)
    {
       cout<<s[i];
    }
    cout<<endl;
    cout<<"Concatenation : ";
    result=s + s1;
    cout<<" "<<result;

}
