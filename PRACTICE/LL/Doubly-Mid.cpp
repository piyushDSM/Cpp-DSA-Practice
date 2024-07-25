#include <bits/stdc++.h>
#include <iostream>
using namespace std;

/*--DOUBLY LINKED LIST NODE--*/
struct node
{
    int data;
    node *next;
    node *prev;
};

/*--Print the Doubly linked List--*/

void printList(node *n){
    int count = 0;
    while(n != NULL){
        cout<<n->data<<endl;
        n = n->next;
        count++;
    }
    cout<<"Number of Doubly Linked List is : "<<count;
}

/*--Insert node in Doubly linked List--*/
void push(node **head_ref, int newData)
{
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = *head_ref;
    newNode->prev = NULL;

    if ((*head_ref) != NULL)
    {
        (*head_ref) = newNode;
    }
    (*head_ref) = newNode;
}

void insertAfter(node *prev_node, int newdata){

    if(prev_node == NULL){
        cout<<"Given prev node can't be NULL"<<endl;
        return;
    }

    node *newNode = new node();
    newNode->data = newdata;
    newNode->next = prev_node->next;

    prev_node->next = newNode;
    newNode->prev = prev_node;

    if(newNode->next != NULL){
        newNode->next->prev = newNode;
    }


}

int main()
{

    node *head = NULL;

    push(&head, 4);
    push(&head, 11);
    push(&head, 3);


    insertAfter(head->next, 14);
    printList(head);

    return 0;
}