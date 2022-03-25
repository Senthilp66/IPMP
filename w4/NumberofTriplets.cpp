#include <bits/stdc++.h>
using namespace std;
 
int Triplets(int n){
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            int a = i * i + j * j;
 
            int b = sqrt(a);
 
            if (b * b == a && b <= n)
                count++;
        }
    }
    return count;
}
 
int main()
{
    int n = 10;
    cout << Triplets(n);
    return 0;
}