#include<bits/stdc++.h>
#include"classes.h"

using namespace std;

void printreverse(Node *n){
        if(n->next != NULL)
            printreverse(n->next);
        
            cout<<"\t"<<n->data;
    }
    
int main()
{
    linkedlist LL;
    for(int i=0;i<10;i++)
    LL.insert(i*i*i);
    
    cout<<"The reverse traversal of is : ";
    
    
    printreverse(LL.head);
    
    return 0;
}
 
