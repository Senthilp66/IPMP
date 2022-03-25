#include<bits/stdc++.h>
using namespace std;

void find4elements(int arr[], int n, int k){
    unordered_map <int, pair<int,int>> m;
    
    for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
    m[arr[i]+arr[j]]={i,j};
    
    for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
    {
        int sum=arr[i]+arr[j];
        
        if(m.find(k-sum)!=m.end())
        {
            pair<int,int> p = m[k-sum];
            if(p.first!=i && p.first!=j && p.second!=i && p.second!=j){
            cout<<arr[i]<<" "<<arr[j]<<" "<<arr[p.first]<<" "<<arr[p.second];
            return ;
            }
        }
    }
}

int main()
{
    int arr[]={10,2,3,4,5,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=23;
    find4elements(arr,n,x);
    return 0;
}