#include<bits/stdc++.h>
using namespace std;

void Amt_water(float x, int i, int j){
    if(j>i)
    {
        cout<<"Invalid";
        exit(0);
    }
    
    float glass[i*(i+1)/2];
    int index=0;
    
    memset(glass,0,sizeof(glass));
    glass[index]=x;
    
    for(int row=1;row<=i;row++)
        for(int column=1;column<=row;column++,index++)
        {
            x=glass[index];
            
            if(x>1.0)
            glass[index]=1.0;
            else
            glass[index]=x;
            
            if(x>=1.0)
            x--;
            else
            x=0.0;
            
            glass[index+row]+=x/2;
            glass[index+row+1]+=x/2;
        }
    
    cout<<glass[(i*(i-1)/2)+j-1];
}

int main()
{
    int i=5,j=3;
    float x=11.0;
    Amt_water(x,i,j);
    return 0;
}