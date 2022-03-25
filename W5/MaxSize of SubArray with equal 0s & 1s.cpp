#include <bits/stdc++.h>
using namespace std;

int findSubArray(int arr[], int n)
{
    int sum = 0;
    int maxsize = -1;

    for (int i = 0; i < n - 1; i++) {
        sum=0;
        for (int j = i; j < n; j++) {
            if(arr[j] == 0)
                sum += -1 ;
            else
                sum += 1 ;

            if (sum == 0 && maxsize < j - i + 1) {
                maxsize = j - i + 1;
            }
        }
    }
    if (maxsize == -1)
        cout << "No such subarray";
    else
        cout << maxsize<<endl;
 
    return maxsize;
}

int main()
{
    int arr[] = { 1, 0, 0, 1, 0, 1, 1 };
    int size = sizeof(arr) / sizeof(arr[0]);
 
    findSubArray(arr, size);
    return 0;
}