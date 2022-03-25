#include <bits/stdc++.h>
using namespace std;

void maxDiff(int arr[], int n){
    int md = 0;
    for(int i=0;i<n;i++)
       for(int j=i+1;j<n;j++){
           if((arr[j]-arr[i]) > md)
              md = arr[j] - arr[i];
       }
    if(md == 0)
       cout<<"The array in descending order";
    else
       cout<<md;
}
int main(){
    int arr[] = {1,3,5,4,2,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxDiff(arr,n);
    
    return 0;
}