#include<bits/stdc++.h>
using namespace std;

void maxMulsArray(int arr[], int n){
    int max_here=arr[0];
    int min_here=arr[0];
    int max_sofar=arr[0];
    
    for(int i=1;i<n;i++){
        int temp=min_here;
        min_here=min({arr[i],arr[i]*max_here,arr[i]*min_here});
        max_here=max({arr[i],arr[i]*max_here,arr[i]*temp});
        max_sofar=max({max_sofar,max_here,min_here});
    }
    cout<<"The maxproduct of a subarray :"<<max_sofar;
    return;
}

int main(){
    int arr[]={0,1,-7,34,7,6,7,0,-6,54,-84};
    int n=sizeof(arr)/sizeof(arr[0]);
    maxMulsArray(arr,n);
    return 0;
}