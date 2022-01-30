#include<bits/stdc++.h>
#include"classes.h"

using namespace std;

int main()
{
    linkedlist LL;
    for(int i=0;i<=10;i++)
    LL.insert(i*i*i);
    
    for(int i=9;i>=0;i--)
    LL.insert(i*i*i);
    
    cout<<"The input Sll is :";
    
    Node *cur = LL.head;
    
    while(cur != NULL){
        cout<<"\t"<<cur->data;
        cur = cur->next;
    }
	
	cur = LL.head;
	int n = LL.length();
	
	int arr[n/2];
	for(int i=0;i<n/2;i++){
	   arr[i] = cur->data;
	   cur = cur->next;
    }
    
    if(n%2 == 1)
       cur = cur->next;
       
    for(int i=(n/2)-1;i>=0;i--){
    	if(arr[i] != cur->data){
    	    cout<<"\nThe above Sll is not a Palindrome"<<endl;
    	    return 0;
    	}
    	cur = cur->next;
	}
	cout<<"\nThe above Sll is Palindrome";
	return 0;
}

