#include<bits/stdc++.h>
using namespace std;

void printDiagonal(int arr[][5], int r, int c){
    vector<vector<int>> dg(r+c-1);
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            dg[i+j].push_back(arr[j][i]);
    for(int i=0;i<dg.size();i++){
        for(int j=0;j<dg[i].size();j++)
            cout<<dg[i].at(j)<<" ";
        cout<<endl;
    }
        
}

int main(){
    int arr[5][5]={{1,2,3,4,5},
                   {6,7,8,9,10},
                   {11,12,13,14,15},
                   {16,17,18,19,20},
                   {21,22,23,24,25}};
    printDiagonal(arr,5,5);
    return 0;
}