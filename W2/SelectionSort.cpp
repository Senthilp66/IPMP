#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void SelectionSort(int A[], int n){
    for(int i=0;i<n;i++){
        int min_idx = i;
        for(int j=i+1;j<n;j++){
            if(A[min_idx] > A[j])
                min_idx = j;
        }
        swap(&A[i], &A[min_idx]);
    }
}

int main(){
    int A[] = {1,6,2,43,6,78,98,4,3,1,23};
    int n = sizeof(A)/sizeof(A[0]);
    cout<<"Input Array : \n";
    printArray(A, n);
    SelectionSort(A, n);
    cout<<"\nSorted Array : \n";
    printArray(A, n);
    return 0;
}