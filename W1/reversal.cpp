#include<bits/stdc++.h>
#include"classes.h"

using namespace std;

void reverse(Node *n)
    {
        Node* current = n;
        Node *prev = NULL, *next = NULL;
  
        while (current != NULL) {
            
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        n = prev;
        
        while(n != NULL){
            cout<<"\t"<<n->data;
            n = n->next;
        }
    }
    
int main()
{
    linkedlist LL;
    for(int i=0;i<10;i++)
    LL.insert(i*i*i);
    
    cout<<"The reversal of linkedlist is : ";
    
    reverse(LL.head);
    
    
    return 0;
}
