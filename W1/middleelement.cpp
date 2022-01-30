#include<bits/stdc++.h>
#include "classes.h"
using namespace std;

int main()
{
    linkedlist LL;
    for(int i=0;i<10;i++)
    LL.insert(i*i*i);
    
    cout<<"The middle element is : ";
    Node *fast=LL.head;
    Node *slow=LL.head;
    
    while(fast != NULL && fast->next !=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    
    cout<<slow->data<<endl;
    
    LL.deletenode(6);
    
    cout<<"After deleting the middlest number, the new middle element is : ";
    
    fast = LL.head;
    slow = LL.head;
    
     while(fast != NULL && fast->next !=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    
    cout<<slow->data;
}
