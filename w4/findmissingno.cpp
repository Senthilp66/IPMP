#include <bits/stdc++.h>
using namespace std;

void findmissingno(int A[], int n){
    int sum = (n+1)*(n+2)/2;
    for(int i=0;i<n;i++)
       sum-=A[i];
    
    cout<<sum;
}

int main(){
    int arr[] = {1,3,5,4,2,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    findmissingno(arr,n);
    return 0;
}