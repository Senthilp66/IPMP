#include<bits/stdc++.h>
#include"classes.h"

using namespace std;

void rotate(Node* n, int k)
{
    if (k == 0)
        return;
 
    Node* cur = n;
 
    int count = 1;
    while (count < k && cur != NULL) {
        cur = cur->next;
        count++;
    }
 
    if (cur == NULL)
        return;
 
    Node* kNode = cur;
 
    while (cur->next != NULL)
        cur = cur->next;
 
    cur->next = n;
 
    n = kNode->next;

    kNode->next = NULL;
    
    while(n != NULL){
        cout<<n->data<<"\t";
        n = n->next;
    }
}

int main()
{
    linkedlist LL;
    for(int i=0;i<10;i++)
    LL.insert(i*i*i);
    LL.print();
    int k;
    cout<<"Enter the number of nodes to rotate :";
    cin>>k;
    cout<<"The rotated linkedlist is : ";
    
    rotate(LL.head, k);
    
    return 0;
}
