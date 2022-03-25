#include<bits/stdc++.h>
using namespace std;

void sub0array(int arr[], int n){
    unordered_set<int>sm;
    int sum=0;
    for (int i = 0; i < n; i++) {
        sum+=arr[i];
        if(sm.find(sum)!=sm.end() || sum==0){
            cout<<"SubArray with some zero Exists";
            return;
        }
        sm.insert(sum);
    }
    cout<<"SubArray with some zero Doesn't Exists";
            return;
}

int main()
{
    int arr[]={1,2,3,-5,9,7,8,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    sub0array(arr,n);
    return 0;
}
