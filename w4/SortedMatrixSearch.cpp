#include <bits/stdc++.h>
using namespace std;
 
void matSearch(int m[5][5], int k){
    if(k<m[0][0] || k>m[4][4]){
       cout<<"\nElement not Found";
       return;
    }
    int i=0, j=4;
    
    while (i < 5 && j >= 0){
        if (m[i][j] == k){
           cout<<"\nElement found at ( "<<i<<" , "<<j<<" )"<<endl;
           return;
        }
        if (m[i][j] > k)
            j--;
        else
            i++;
    }
    cout<<"\nElement not Found";
    return;
}


int main(){
    int mat[5][5] = {{ 1, 2, 3, 5, 7},
                     { 4, 6, 8, 9, 8},
                     { 7, 8, 9, 10, 15},
                     { 9, 11, 12, 13, 19},
                     { 11, 12, 15, 17, 19}};
    int key1 = 10, key2 = 125;
    matSearch(mat, key1);
    matSearch(mat, key2);
    return 0;
}