#include<bits/stdc++.h>
using namespace std;

void intersection(int a1[], int n1, int a2[], int n2, int a3[], int n3){
    int i=0,j=0,k=0;
    vector<int> c;
    while(i<n1 && j<n2 && k<n3){
        if(a1[i]==a2[j] && a2[j]==a3[k]){
            c.push_back(a1[i]);
            i++;
            j++;
            k++;
        }
        else{
            if(a1[i]<a2[j])
               i++;
            else if(a2[j]<a1[i])
               j++;
            else
               k++;
        }
    }
    for(int i=0;i<c.size();i++)
       cout<<c.at(i)<<" ";
    if(c.size()==0)
       cout<<"There is no intersection";
}

int main(){
    int arr1[]={1,3,5,7,9};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={1,2,4,5,7,8};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int arr3[]={1,3,4,5,9};
    int n3=sizeof(arr3)/sizeof(arr3[0]);
    intersection(arr1,n1,arr2,n2,arr3,n3);
    return 0;
}