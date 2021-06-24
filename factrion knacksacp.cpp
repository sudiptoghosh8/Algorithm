#include<bits/stdc++.h>
using namespace std;

int max_(int a, int b)
{
    return (a > b) ? a : b;
}

int fractional_Knapsack(int W, int wt[100], int val[100], int n)
{
    int i, w;
    int K[n + 1][W + 1];

    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max_(val[i - 1]
                          + K[i - 1][w - wt[i - 1]],
                          K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }

    return K[n][W];
}

int main()
{
    int val[100] ;
    int n,m;
     cout<<"Give capacity size : ";
    cin>>n;


    for(int i=0;i<n;i++)
    {cout<<"Give Value : ";
        cin>>val[i];
    }
    int wt[100] ;

    for(int i=0;i<n;i++)
    {cout<<"Give Weight : ";
        cin>>wt[i];
    }
    int W ;
    cout<<"Give knapsack of capacity : ";
    cin>>W;

    printf("%d", fractional_Knapsack(W, wt, val, n));
    return 0;
}
