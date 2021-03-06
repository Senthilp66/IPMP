#include<bits/stdc++.h>
using namespace std;

void get2NonRepeatingNos(int arr[], int n, int* x, int* y){
    int Xor = arr[0];
 
    int setbit;
    int i;
    *x = 0;
    *y = 0;
 
    for (i = 1; i < n; i++)
        Xor ^= arr[i];
 
    setbit = Xor & ~(Xor - 1);
 
    for (i = 0; i < n; i++) {
 
        if (arr[i] & setbit)
            *x = *x ^ arr[i];
        
        else {
            *y = *y ^ arr[i];
        }
    }
}

int main()
{
    int arr[] = { 2, 3, 7, 9, 11, 2, 3, 11 };
    int n = sizeof(arr) / sizeof(*arr);
    int* x = new int[(sizeof(int))];
    int* y = new int[(sizeof(int))];
    get2NonRepeatingNos(arr, n, x, y);
    cout << "The non-repeating elements are " << *x<< " and " << *y;
}
 