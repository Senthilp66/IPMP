#include<bits/stdc++.h>
using namespace std;

void TwoOddoccurance(int arr[], int n){
    int xor2,i,x=0,y=0;
    for(int i=0;i<n;i++)
       xor2=xor2^arr[i];
    
    int setbit=xor2 & ~(xor2-1);
    
    for(int i=0;i<n;i++)
    {
       if(arr[i] & setbit)
       x=x^arr[i];
       
       else
       y=y^arr[i];
    }
    cout<<x<<endl<<y;
}

int main(){
    int A[]={1,2,3,1,4,5,4,3,7,6,7,6};
    int size=sizeof(A)/sizeof(A[0]);
    TwoOddoccurance(A,size);
    return 0;
}