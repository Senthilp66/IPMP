#include <bits/stdc++.h>
using namespace std;
 
void boleanMatrix(bool mat[3][4], int R, int C){
    bool row[R];
    bool col[C];
    int i, j;
     
    for (i = 0; i < R; i++)
        row[i] = 0;
    for (i = 0; i < C; i++)
        col[i] = 0;
    
    for (i = 0; i < R; i++)
        for (j = 0; j < C; j++)
            if (mat[i][j] == 1){
                row[i] = 1;
                col[j] = 1;
            }

    for (i = 0; i < R; i++)
        for (j = 0; j < C; j++)
            if ( row[i] == 1 || col[j] == 1 )
            {
                mat[i][j] = 1;
            }
}

void printMatrix(bool mat[3][4]){
    int i, j;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 4; j++)
            cout << mat[i][j];
        cout << endl;
    }
}

int main()
{
    bool mat[3][4] = { {1, 0, 0, 1},
                       {0, 0, 1, 0},
                       {0, 0, 0, 0}};
 
    cout << "Input Matrix \n";
    printMatrix(mat);
 
    boleanMatrix(mat,3,4);
 
    printf("Matrix after modification \n");
    printMatrix(mat);
 
    return 0;
}