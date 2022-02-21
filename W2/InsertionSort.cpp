#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
    for (int i=0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 

void InsertionSort(int A[], int n){
    for(int i=1;i<n;i++){
        int cur = A[i];
        int j=i-1;
        while(A[j] > cur){
                A[j+1] = A[j];
                j--;
            }
        A[j+1] = cur;
        }
}

int main(){
    int A[] = {1,6,2,43,6,78,98,4,3,1,23};
    int n = sizeof(A)/sizeof(A[0]);
    cout<<"Input Array : \n";
    printArray(A, n);
    InsertionSort(A, n);
    cout<<"\nSorted Array : \n";
    printArray(A, n);
    return 0;
}