#include<bits/stdc++.h>
using namespace std;

void ProductArray(int arr[], int n){
    int product = 1;
    for(int i=0;i<n;i++)
       product=product*arr[i];
    for(int i=0;i<n;i++)
       arr[i]=product/arr[i];
    for(int j=0;j<n;j++)
       cout<<" "<<arr[j]<<endl;
    return;
}

int main(){
    int arr[] = {1,3,5,4,2,7,8,9,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    ProductArray(arr, n);
    return 0;
}