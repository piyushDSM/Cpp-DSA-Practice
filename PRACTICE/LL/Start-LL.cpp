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

/* Dynamically Node in LL*/

void push(node **head, int newData)
{    
    node *newNode = new node;
    if(head == NULL){
    *head = newNode;
}
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}

int main()
{
    node *head = NULL;
    push(&head, 5);
    push(&head, 7);

    printList(head);

    return 0;
}