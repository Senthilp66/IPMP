#include <bits/stdc++.h>
using namespace std;
 
void getInvCount(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                count++;
 
    cout<<count;
}

int main()
{
    int arr[] = { 1, 20, 6, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    getInvCount(arr, n);
    return 0;
}