#include <bits/stdc++.h>
using namespace std;

int MaxSumSbArray(int arr[], int n){
    int maxth=0;
    int max_sofar=0;
    for(int i=0;i<n;i++){
        maxth+=arr[i];
        max_sofar=max(max_sofar,maxth);
        if(maxth<0)
            maxth=0;
    }
    cout<<max_sofar;
}

int main()
{
    int arr[] = {1,-3,4,-7,6,9,-5,10,-4 };
    int size = sizeof(arr) / sizeof(arr[0]);
 
    MaxSumSbArray(arr, size);
    return 0;
}