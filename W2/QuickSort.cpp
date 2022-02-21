#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size) 
{ 
    for (int i=0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 

int partition(int arr[],int low,int high)
{
    int j,temp,i=low-1,pivot=arr[high];
    for(j=low;j<=high-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;
    
    return (i+1);
}

void QuickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int p=partition(arr,low,high);
        QuickSort(arr,low,p-1);
        QuickSort(arr,p+1,high);
    }
}

int main(){
    int A[] = {1,6,2,43,6,78,98,4,3,1,23};
    int n = sizeof(A)/sizeof(A[0]);
    cout<<"Input Array : \n";
    printArray(A, n);
    QuickSort(A, 0, n-1);
    cout<<"\nSorted Array : \n";
    printArray(A, n);
    return 0;
}