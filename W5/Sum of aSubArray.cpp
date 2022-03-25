#include <bits/stdc++.h>
using namespace std;
 
void sumsubArray(int arr[], int n, int k){
    for (int i = 0; i < n - 1; i++){
        int sum = arr[i];
        for (int j = i + 1; j <= n; j++){
            if (sum == k){
                cout<<"The sum is found between "<<i<<" and "<<j-1;
                return;
            }
            sum +=arr[j];
        }
    }
    cout<<"The sum is not found";
    return;
}

int main()
{
    int arr[] = { 1, 20, 6, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k=9;
    sumsubArray(arr, n, k);
    return 0;
}