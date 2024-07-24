#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void pintList(node *n)
{
    int count = 0;

    while (n != NULL)
    {
        cout << n->data << endl;
        n = n->next;
        count++;
    }
    cout << "No. of element in Linked List is : " << count << endl;
}


void push(node **head_ref, int newData)
{
    node *newNode = new node;
    newNode->data = newData;
    newNode->next = *head_ref;
    *head_ref = newNode;

}

void insertAfter(node *prev_node, int newData){
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = prev_node->next;
    prev_node->next = newNode;
}

int main()
{
    node *head = NULL;
    push(&head, 5);
    push(&head, 7);
    push(&head, -3);
    

    insertAfter(head->next, 80);
    pintList(head);

    return 0;
}
