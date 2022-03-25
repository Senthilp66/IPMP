#include<bits/stdc++.h>
using namespace std;

void UnionIntersection(int A[], int a, int B[], int b){
    int i=0, j=0;
    cout<<"Union"<<endl;
    
    while(i<a && j<b){
        if(A[i]<B[j]){
            cout<<A[i]<<"  ";
            i++;
        }
        else if(B[j]<A[i]){
            cout<<B[j]<<"  ";
            j++;
        }
        else{
            cout<<A[i]<<"  ";
            i++;
            j++;
        }
    }
    while(i<a)
        cout<<A[i++]<<"  ";
        
    while(i<b)
        cout<<B[i++]<<"  ";
    
    cout<<"\nIntersection"<<endl;
    i=0, j=0;
    
    while(i<a && j<b){
        if(A[i]<B[j]){
            i++;
        }
        else if(B[j]<A[i]){
            j++;
        }
        else{
            cout<<A[i]<<"  ";
            i++;
            j++;
        }
    }
    return;
}

int main(){
    int A[]={1,3,5,7,9,11,15};
    int a=sizeof(A)/sizeof(A[0]);
    int B[]={0,1,2,5,6,7};
    int b=sizeof(A)/sizeof(A[0]);
    UnionIntersection(A,a,B,b);
    return 0;
}