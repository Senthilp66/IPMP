#include<bits/stdc++.h>
using namespace std;

void max_lthbitonic(int arr[], int n){
    int inc[n], dec[n];
    inc[0]= 1;
    dec[n-1]=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1])
            inc[i]=inc[i-1]+1;
        else
            inc[i]=1;
    }
    for(int i=n-2;i>=0;i--){
        if(arr[i]>arr[i+1])
            dec[i]=dec[i+1]+1;
        else
            dec[i]=0;
    }
    
    int max = inc[0] + dec[0];
    for(int i=1;i<n;i++)
        if(inc[i]+dec[i] > max)
            max = inc[i]+dec[i];
            
    cout<<max;
}

int main(){
    int arr[]={1,2,3,6,7,9,2,1,3,5,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    max_lthbitonic(arr,n);
    return 0;
}