#include <bits/stdc++.h>
using namespace std;

void FindMaxSum(int arr[], int n){
    int incl = arr[0];
    int excl = 0;
    int excl_new;
    int i;
 
    for (i = 1; i < n; i++)
    {
        if(incl > excl)
            excl_new = incl;
        else
            excl_new = excl;

        incl = excl + arr[i];
        excl = excl_new;
    }

    int maxSum = max(incl , excl);
    cout<<maxSum;
    return;
}

int main(){
    int arr[] = {5, 5, 10, 100, 10, 5};
    FindMaxSum(arr,6);
    return 0;
}