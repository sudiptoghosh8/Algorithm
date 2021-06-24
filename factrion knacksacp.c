#include <iostream>
#include<fstream>
using namespace std;

struct Item
{
   int value, weight;
};


double Knapsack(int W, struct Item arr[], int n)
{

   for(int i=0; i<n-1; i++)
   {
       for(int j=0; j<n-1-i; j++)
       {
           if((double)arr[j].value/arr[j].weight<(double)arr[j+1].value/arr[j+1].weight)
           {
               Item temp;
               temp.value=arr[j].value;
               temp.weight=arr[j].weight;
               arr[j].weight=arr[j+1].weight;
               arr[j].value=arr[j+1].value;
           }
       }
   }

   int curWeight = 0;
   double finalvalue = 0.0;


   for (int i = 0; i < n; i++)
   {

       if (curWeight + arr[i].weight <= W)
       {
           curWeight += arr[i].weight;
           finalvalue += arr[i].value;
           outfile<<"item "<<i<< " : "<<arr[i].value<<endl;
       }


       else
       {
           int remain = W - curWeight;
           finalvalue += arr[i].value * ((double) remain / arr[i].weight);
           outfile<<"item "<<i<< " : "<<arr[i].value * ((double) remain / arr[i].weight)<<endl;
           break;
       }
       outfile<<"Total Value : "<<finalvalue<<endl;
   }

   /
   return finalvalue;
}


int main()
{
   int C;
   Item arr[20];

   int N;
   cout<<"Enter number of element : ";
   cin>>N;
   cout<<"Enter Bag Capacity : ";
   cin>>C;
for(int i=0; i<N; i++)
{
   cout<<"Enter Weight of item no "<<(i+1)<<endl;
   cin>>arr[i].weight;
   cout<<"Enter Value of item no "<<(i+1)<<endl;
   cin>>arr[i].weight;
}
   cout << "Maximum value we can obtain = "
       << Knapsack(C, arr, N);
       cout<<"Successfully written to file"<<endl;
   return 0;
}
