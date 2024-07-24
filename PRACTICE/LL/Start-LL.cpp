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

node *push(node *head, int newData){
 node *newNode = new node();
 newNode->data= newData;
 newNode->next= head;
 head = newNode;

 return head;
}

int main()
{

    node *head = NULL;
    head = push(head,5);
    head = push(head,7);

    printList(head);

    return 0;
}