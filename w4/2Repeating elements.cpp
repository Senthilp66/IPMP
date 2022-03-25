#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={4,2,5,3,4,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    unordered_set <int> s;
    
    for(int i=0;i<n;i++)
    {
        if(!s.empty() && s.find(arr[i])!=s.end())
        {
            cout<<arr[i]<<endl;
        }
        else
        s.insert(arr[i]);
    }
    return 0;
}