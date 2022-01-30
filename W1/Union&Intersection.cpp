#include<bits/stdc++.h>
#include"classes.h"

using namespace std;

 int main()
{
    linkedlist LL1;
    LL1.insert(0);
    LL1.insert(2);
    LL1.insert(3);
    LL1.insert(6);
    
    linkedlist LL2;
    LL2.insert(1);
    LL2.insert(2);
    LL2.insert(4);
    LL2.insert(6);
    
    Node *cur1 = LL1.head;
    Node *cur2 = LL2.head;

    linkedlist I, U;
    int flag = 0;
    while(cur1!=NULL)
    {
        U.insert(cur1->data);
        cur1=cur1->next;
    }
    cur1=LL1.head;
    while(cur2!=NULL)
    {
        while(cur1->next!=NULL)
        {
            if(cur1->data==cur2->data){
            I.insert(cur2->data);
            flag=1;
            break;
            }
            cur1=cur1->next;
        }
        if(flag==0)
        U.insert(cur2->data);
        cur1=U.head;
        cur2=cur2->next;
        flag=0;
    }
    cout<<"A :\n";
    LL1.print();
    cout<<"\nB :\n";
    LL2.print();
    cout<<"\nUnion :\n";
    U.print();
    cout<<"\nIntersection :\n";
    I.print();
    
    return 0;
}

