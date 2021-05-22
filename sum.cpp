#include<bits/stdc++.h>
using namespace std;

void Series(string n[1000])
{
if(sizeof(n)==0)
        return;
for(int i=0;i<=sizeof(n);i++)
{
    Series(n[i] - 1);
    printf("%s\n", n[i]);
}



}

int main()
{
    string s;
    cin>>s;
    printSeries(s.size());



    return 0;
}
