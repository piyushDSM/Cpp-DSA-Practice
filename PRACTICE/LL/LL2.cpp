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

node *push(node *head, int newData)
{
    node *newNode = new node;
    newNode->data = newData;
    newNode->next = head;
    head = newNode;

    return head;
}

// void push(node **head_ref, int newData)
// {
//     node *newNode = new node;
//     newNode->data = newData;
//     newNode->next = *head_ref;
//     *head_ref = newNode;

// }

int main()
{
    node *head = NULL;
    head = push(head, 5);
    head = push(head, 7);

    pintList(head);

    return 0;
}