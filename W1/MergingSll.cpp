#include<bits/stdc++.h>
#include"classes.h"

using namespace std;
void merge(Node * cur1, Node * cur2)
{
    linkedlist M;
    
    while(cur1!=NULL && cur2!=NULL)
    {
        if(cur1->data < cur2->data)
        {
            M.insert(cur1->data);
            cur1=cur1->next;
        }
        else
        {
            M.insert(cur2->data);
            cur2=cur2->next;
        }
    }
    
    while(cur1!=NULL)
    {
        M.insert(cur1->data);
        cur1=cur1->next;
    }
    
    while(cur2!=NULL)
    {
        M.insert(cur2->data);
        cur2=cur2->next;
    }
    
    cout<<"\nAfter merging : ";
    M.print();
}



 int main()
{
    linkedlist LL1;
    LL1.insert(0);
    LL1.insert(2);
    LL1.insert(4);
    LL1.insert(6);
    
    linkedlist LL2;
    LL2.insert(1);
    LL2.insert(3);
    LL2.insert(5);
    LL2.insert(7);
    
    Node *cur1 = LL1.head;
    Node *cur2 = LL2.head;
    LL1.print();
    LL2.print();
    merge(cur1, cur2);
    return 0;
}
