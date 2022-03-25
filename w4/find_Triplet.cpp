#include<bits/stdc++.h>
using namespace std;

void findTriplet(int A[], int n, int key){
    for(int i=0;i<n;i++)
       for(int j=i+1;j<n;j++)
          for(int k=j+1;k<n;k++){
              if(A[i]+A[j]+A[k] == key){
                 cout<<"The required Triplet is : "<<A[i]<<"  "<<A[j]<<"  "<<A[k]<<endl;
                 return;
              }
          }
    cout<<"There is no Triplet int he given Array"<<endl;
    return;
}

int main(){
    int A[]={1,3,4,5,7,6,9,8,11};
    int size = sizeof(A)/sizeof(A[0]);
    int Key = 15;
    findTriplet(A,size,Key);
    return 0;
}