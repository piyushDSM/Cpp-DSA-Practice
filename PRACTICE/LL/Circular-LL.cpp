#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void prinList(node *head)
{
    node *cur = head;
    while (cur != NULL)
    {
        cout << cur->data << endl;
        cur = cur->next;
    }
}

void printCircularlist(node *first)
{
    node *temp = first;
    if (first != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next; // this changes to temp

        while (temp != first)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
}
int main()
{
    node *head = new node();
    node *second = new node();
    node *third = new node();
    node *four = new node();
    node *five = new node();
    node *six = new node();
    node *seven = new node();
    node *eight = new node();
    node *nine = new node();

    head->data = 5;
    head->next = second;

    second->data = 1;
    second->next = third;

    third->data = 3;
    third->next = four;

    four->data = 11;
    four->next = five;

    five->data = 10;
    five->next = six;

    six->data = 2;
    six->next = seven;

    seven->data = 7;
    seven->next = eight;

    eight->data = 9;
    eight->next = nine;

    nine->data = 18;
    nine->next = head;

    printCircularlist(five);
    
//  prinList(head);

    return 0;
}