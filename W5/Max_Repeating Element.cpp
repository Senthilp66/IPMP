#include <bits/stdc++.h>
using namespace std;

void max_Reapeating(int arr[], int n){
    for (int j = 0; j < n; j++)
        arr[arr[j]]+=n;

    int max = 0;
    for (int j = 0; j < n; j++)
        if(arr[j]>arr[max])
            max=j;
    cout<<max<<" ";
    return;
}

int main(){
    int arr[] = { 1, 0, 2, 1, 3, 3, 5, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    max_Reapeating(arr, n);
    return 0;
}