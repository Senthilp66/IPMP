#include<bits/stdc++.h>
#include"classes.h"

using namespace std;

void intersectionnode(int d, Node *cur1, Node *cur2){
    for(int i=0;i<d;i++)
        cur1 = cur1->next;
    
    while(cur1->data != NULL && cur2->data !=NULL){
        if(cur1->data == cur2->data){
            cout<<cur1->data;
            return;
        }
        cur1 = cur1->next;
        cur2 = cur2->next;
    }
    return;
}



 int main()
{
    linkedlist LL1;
    for(int i=0;i<=10;i++)
    LL1.insert(i);
    
    linkedlist LL2;
    for(int i=11;i<=15;i++)
    LL2.insert(i);
    
    Node *cur1 = LL1.head;
    Node *cur2 = LL2.head;
    int n = LL1.length();
    while(n>1){
        cur1 = cur1->next;
        n--;
    }
    
cur1->next = cur2->next->next;

int c1=0, c2=0;
cur1 = LL1.head;
cur2 = LL2.head;
while(cur1 != NULL){
    cout<<" "<<cur1->data;
    cur1 = cur1->next;
    c1++;
}
cout<<"\n";

while(cur2 != NULL){
    cout<<" "<<cur2->data;
    cur2 = cur2->next;
    c2++;
}

cout<<"\nThe intersection Node->data is : ";

cur1 = LL1.head;
cur2 = LL2.head;
int d;

if(c1>c2)
   d=c1-c2;
   
else
   d=c2-c1;
   
intersectionnode(d, cur1, cur2);
	return 0;
}
	
