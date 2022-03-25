#include <bits/stdc++.h>
using namespace std;
 
void maxProfit(int arr[], int n){
    int profit = 0;
    int sid=0;
    int lid=0;
    for (int i=1; i<n; i++){
        if(arr[i]>arr[i-1])
            lid++;
        else if(sid==lid)
            sid=lid=sid+1;
        else if(lid>sid){
            profit+=arr[lid]-arr[sid];
            cout<<"Buy at day "<<sid<<" and "<<"Sell at day "<<lid<<endl;
            lid=i;
            sid=i;
        }
    }
    if(lid>sid){
            profit+=arr[lid]-arr[sid];
            cout<<"Buy at day "<<sid<<" and "<<"Sell at day "<<lid<<endl;
        }
    cout<<profit<<endl;
    return;
}

int main()
{
    int arr[] = { 1, 23, 12, 9, 30, 1, 2, 50 };
    int n = sizeof(arr) / sizeof(arr[0]);
   
    maxProfit(arr, n);
    return 0;
}