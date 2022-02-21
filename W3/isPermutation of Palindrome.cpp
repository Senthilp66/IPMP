#include<bits/stdc++.h>
using namespace std;

void ispalindrome(string s)
{
    unordered_map<int,int> a;
    int temp=0;
    for(int i=0;i<s.size();i++)
     a[s[i]]=a[s[i]]^1;
    for (auto x:a)
    {
        if(x.second==1)temp++;
    }
    if(temp ==1 || temp==0)
    cout<<"Palindrome\n";
    else
    cout<<"Not a palindrome\n";
}

int main()
{
    string s="afghshfga";
    ispalindrome(s);
    
    s="aabckldbdc";
    ispalindrome(s);
    
    return 0;
}