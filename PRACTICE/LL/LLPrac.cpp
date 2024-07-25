#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void printList(node *n) //iterative approach
{
    while (n != NULL)
    {
        cout << n->data << endl;
        n = n->next;
    }
}

//recurisve approach

void printLL(node *head){
    if(head == NULL) return;
    cout<<head->data<<endl;
    printLL(head->next);
}
int main()
{

    node *head = new node();
    node *second = new node();
    node *third = new node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printList(head);
    cout<<endl;
    printLL(head);

    return 0;
}