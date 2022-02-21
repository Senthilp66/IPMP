#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size) 
{ 
    for (int i=0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 

void Merge(int arr[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int i,j,k;
    
    int A[n1],B[n2];
    
    for(i=0;i<n1;i++)
    {
        A[i]=arr[l+i];
    }
    
    for(j=0;j<n2;j++)
    {
        B[j]=arr[m+1+j];
    }
    
    i=0;
    j=0;
    k=l;
    
    while(i<n1 && j<n2)
    {
        if(A[i]<B[j]){
        arr[k]=A[i];
        i++;
        }
        else{
        arr[k]=B[j];
        j++;
        }
        k++;
    }
    
    while(j<n2)
    {
        arr[k]=B[j];
        j++;
        k++;
    }
    
    while(i<n1)
    {
        arr[k]=A[i];
        i++;
        k++;
    }
}

void MergeSort(int arr[],int l,int r)
{
    if(r>l)
    {
    int m=l+((r-l)/2);
    MergeSort(arr,l,m);
    MergeSort(arr,m+1,r);
    Merge(arr,l,m,r);
    }
    else
    return;
}

int main(){
    int A[] = {1,6,2,43,6,78,98,4,3,1,23};
    int n = sizeof(A)/sizeof(A[0]);
    cout<<"Input Array : \n";
    printArray(A, n);
    MergeSort(A, 0, n-1);
    cout<<"\nSorted Array : \n";
    printArray(A, n);
    return 0;
}