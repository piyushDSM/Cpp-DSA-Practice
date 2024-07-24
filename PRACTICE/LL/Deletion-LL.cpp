#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/* LINKED List Node*/
struct node
{
    int data;
    node *next;
};

/* Print Linked List */
void printList(node *n)
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

void deleteNode(node **head_ref, int key)
{
    // initialise prev and temp

    node *prev, *temp;

    // store head to the temp

    temp = *head_ref;

    // if key is present in head
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    // We will traverse the LL & keep track of prev node
    // beacuse we have to perform prev->next

    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    // we traverse whole LL & did not get the key
    if (temp == NULL)
    {
        return;
    }

    // but, if we found the key
    prev->next = temp->next;
    free(temp);
}

int main()
{

    node *head = NULL;
    push(&head, 5);
    push(&head, 7);
    push(&head, -3);
    push(&head, 2);
    push(&head, 9);

    printList(head);

    deleteNode(&head, 2);

    printList(head);

    return 0;
}