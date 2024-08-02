#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void printList(node *n) // iterative approach
{
    while (n != NULL)
    {
        cout << n->data << endl;
        n = n->next;
    }
}

node *reverseList(node *head)
{
    if (head == NULL)
        return head;

    vector<int> data;
    for (node *curr = head; curr != NULL; curr = curr->next)
    {
        data.push_back(curr->data);
    }
    for (node *curr = head; curr != NULL; curr = curr->next)
    {
        curr->data = data.back();
        data.pop_back();
    }
    return head;
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
    cout << endl;
    reverseList(head);
    printList(head);
    return 0;
}