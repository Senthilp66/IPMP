#include <bits/stdc++.h>
using namespace std;

void RainWater_Collected(int arr[], int n){
    int minht = min(arr[0],arr[n-1]);
    int wcwb = ((2*n - 3)*minht);
    int bb=0;
    for(int i=1;i<=n-2;i++){
        if(arr[i]<minht)
            bb+=arr[i];
        else
            bb+=minht;
    }
    int wcb = wcwb - bb;
    cout<<wcb;
    return;
}

int main(){
    int arr[] = {4,6,8,1,0,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    RainWater_Collected(arr,n);
    return 0;
}