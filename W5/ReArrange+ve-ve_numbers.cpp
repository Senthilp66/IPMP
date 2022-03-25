#include <bits/stdc++.h>
using namespace std;

void reArrange(int arr[], int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]<0){
           swap(arr[i],arr[j]);
           i++;
        }
    }
    int p=i;
    int neg=0;
    while(p<n && arr[neg]<0){
        swap(arr[neg],arr[p]);
        neg+=2;
        p+=2;
    }
    
    for(int i=0;i<n;i++)
       cout<<arr[i]<<" "<<endl;
}

int main()
{
    int arr[] = {0,-1,-2,4,5,6,-7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    reArrange(arr,n);
    
    return 0;
}