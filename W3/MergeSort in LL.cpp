#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void SplitLL(Node* head,
                    Node** firsthalf, Node** secondhalf)
{
    Node* fast;
    Node* slow;
    slow = head;
    fast = head->next;
 
    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
    }
 
    *firsthalf = head;
    *secondhalf = slow->next;
    slow->next = NULL;
}

Node* Merge(Node* a, Node* b)
{
    Node* result = NULL;
 
    if (a == NULL)
        return (b);
    else if (b == NULL)
        return (a);
 
    if (a->data <= b->data) {
        result = a;
        result->next = Merge(a->next, b);
    }
    else {
        result = b;
        result->next = Merge(a, b->next);
    }
    return (result);
}

void MergeSort(Node** headref)
{
    Node* head = *headref;
    Node* a;
    Node* b;
 
    if ((head == NULL) || (head->next == NULL)) {
        return;
    }
 
    SplitLL(head, &a, &b);
 
    MergeSort(&a);
    MergeSort(&b);
    
    *headref = Merge(a, b);
}
 
void push(Node** head, int new_data)
{
    Node* new_node = new Node();
 
    new_node->data = new_data;
 
    new_node->next = (*head);
 
    (*head) = new_node;
}
 
void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

int main()
{
    Node* a = NULL;
 
    push(&a, 5);
    push(&a, 21);
    push(&a, 5);
    push(&a, 2);
    push(&a, 3);
    push(&a, 1);
    push(&a, 20);
    push(&a, 33);
    push(&a, 19);
 
    cout << "UnSorted Linked List is: \n";
    printList(a);
 
    MergeSort(&a);
 
    cout << "\nSorted Linked List is: \n";
    printList(a);
 
    return 0;
}