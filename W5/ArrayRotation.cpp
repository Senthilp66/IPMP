#include <bits/stdc++.h>
using namespace std;
 
void leftRotate(int arr[], int n, int k){
    k=k%n;
    int temp[k];
    for(int i=0;i<k;i++)
        temp[i]=arr[i];
    for(int i=k;i<n;i++)
        arr[i-k]=arr[k];
    int count=n-k;
    for(int i=0;i<k;i++){
        arr[count]=temp[i];
        count++;
    }
}


int main()
{
    int arr[] = { 1, 20, 6, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k=9;
    leftRotate(arr, n, k);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}