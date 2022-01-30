#include<bits/stdc++.h>
#include"classes.h"

using namespace std;

bool find_triplet(Node *a, Node *b, Node *c, int t)
{
    Node *cur1 = a;
 
    
    while (cur1 != NULL)
    {
        Node *cur2 = b;
        Node *cur3 = c;
 
        while (cur2 != NULL && cur3 != NULL)
        {
            int sum = cur1->data + cur2->data + cur3->data;
            if (sum == t)
            {
            cout << "Triplet Found: " << cur1->data << " " <<
                                cur2->data << " " << cur3->data;
            return true;
            }
 
            else if (sum < t)
                cur2 = cur2->next;
            else 
                cur3 = cur3->next;
        }
        cur1 = cur1->next;
    }
 
    cout << "No such triplet";
    return false;
}

int main()
{
    linkedlist LL1;
    LL1.insert(1);
    LL1.insert(2);
    LL1.insert(3);
    LL1.insert(4);
    
    linkedlist LL2;
    LL2.insert(2);
    LL2.insert(3);
    LL2.insert(5);
    LL2.insert(7);
    
    linkedlist LL3;
    LL3.insert(9);
    LL3.insert(8);
    LL3.insert(3);
    LL3.insert(1);
    
    LL1.print();
    LL2.print();
    LL3.print();
    
    find_triplet(LL1.head, LL2.head, LL3.head,20);
    return 0;
}
