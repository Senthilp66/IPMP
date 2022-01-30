#include<bits/stdc++.h>
#include"classes.h"

using namespace std;

void detect_remove_loop(Node *cur)
{
    if(cur->next==NULL)   
    {
        printf("There is no loop");
        return;
    }
    if(cur->next->flag==1)
    {
        printf("Loop is detected and removed");
        cur->next=NULL;
        return;
    }
    cur->flag=1;
    detect_remove_loop(cur->next);
}

int main()
{
    linkedlist LL;
    LL.insert(1);
    LL.insert(2);
    LL.insert(3);
    LL.insert(4);
    LL.head->next->next->next->next=LL.head->next;  //loop from 4 to 2
    
    detect_remove_loop(LL.head);
    
    LL.print();
}
