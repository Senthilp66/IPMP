#include<bits/stdc++.h>
using namespace std;

void findmax1s( int A[6][4], int r, int c ) 
{
    int j=c-1;
    int res;
    for(int i=0;i<r;i++){
        while(j>=0 && A[i][j]==1){
            res=i;
            j--;
        }
    }
    cout<<res;
}

int main()
{
    int arr[6][4] = { {0, 0, 0, 1},
                    {0, 1, 1, 1},
                    {0, 0, 1, 1},
                    {0, 0, 0, 1},
                    {0, 0, 1, 1},
                    {0, 0, 0, 0}};
                    
    findmax1s(arr,6,4);
    
    return 0;
}