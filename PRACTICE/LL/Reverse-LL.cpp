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
 node* reverseLLinOne(node* head) {
        node *prev = NULL , *curr = head;

        while(curr != NULL){
            node *temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;;
        }
        return prev;
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
    // reverseList(head);
    reverseLLinOne(head);
    printList(head);
    return 0;
}