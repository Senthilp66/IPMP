#include <bits/stdc++.h>
using namespace std;
 
int findpartionElement(int arr[], int n)
{
    int prefSum[n];
    prefSum[0] = arr[0];
    for (int i = 1; i < n; i++)
        prefSum[i] = prefSum[i - 1] + arr[i];
 
    int suffSum[n];
    suffSum[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
        suffSum[i] = suffSum[i + 1] + arr[i];
 
    for (int i = 1; i < n - 1; i++)
        if (prefSum[i] == suffSum[i])
            return arr[i];
 
    return -1;
}

int main()
{
    int arr[] = { 6, 3, 21, 5, 27, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findpartionElement(arr, n);
    return 0;
}