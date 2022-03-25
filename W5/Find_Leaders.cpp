#include <bits/stdc++.h>
using namespace std;

void findLeaders(int arr[], int n){
    for (int i = 0; i < n; i++){
        int j;
        for (j = i+1; j < n; j++){
            if (arr[i] <= arr[j])
                break;
        }
        if (j==n)
            cout<<arr[i]<<" ";
    }
    return;
}

int main(){
    int arr[] = { 1, 10, 21, 11, 13, 5, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    findLeaders(arr, n);
    return 0;
}