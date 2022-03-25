#include<bits/stdc++.h>
using namespace std;

void segte_0s1s(int arr[], int n){
    int count=0;
    for(int i=0;i<n;i++)
        if(arr[i]==0){
            swap(arr[i],arr[count]);
            count++;
        }
    return;
}

int main(){
    int arr[]={0,1,0,1,0,1,1,0,0,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    segte_0s1s(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}