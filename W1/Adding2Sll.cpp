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
    linkedlist LL1;
    LL1.insert(6);
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
    cout<<"   +\n";
    LL2.print();
    int l1=LL1.length();
    int l2=LL2.length();
    
    int a[l1],b[l2];
    
    Node*cur=LL1.head;
    
    for(int i=0;i<l1;i++)
    {
        a[l1-i-1]=cur->data;
        cur=cur->next;
    }
    
    cur=LL2.head;
    
    for(int i=0;i<l2;i++)
    {
        b[l2-i-1]=cur->data;
        cur=cur->next;
    }
    
    LL1.deletelist();
    int sum,carry=0;
    for(int i=0;i<l1 && i<l2 ;i++)
    {
        sum=(a[i]+b[i]+carry)%10;
        carry=(a[i]+b[i]+carry)/10;
        LL1.insert(sum);
    }
    
    if(l1>l2){
    while(l1>l2){
        LL1.insert((a[l2]+carry)%10);
        carry=(a[l2]+carry)/10;
        l2++;
    }}
    
    else{
    while(l1<l2){
        LL1.insert((b[l2]+carry)%10);
        carry=(b[l2]+carry)/10;
        l1++;
    }}
    
    if(carry>0){
        while((carry/10)>0)
        LL1.insert(carry/10);}
        
    if(carry>0)
        LL1.insert(carry);
    cout<<"\n=";
    cur=LL1.head;
    printreverse(cur);

    return 0;
}
