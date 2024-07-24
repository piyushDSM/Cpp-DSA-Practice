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

void append(node **head_ref, int newData)
{
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = NULL;

    node *last = *head_ref;

    if (*head_ref == NULL)
    {
        *head_ref = newNode;
        return;
    }

    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = newNode;
    return;
}

int main()
{
    node *head = NULL;
    push(&head, 5);
    push(&head, 7);
    push(&head, -3);

    append(&head, 90);
    pintList(head);

    return 0;
}
