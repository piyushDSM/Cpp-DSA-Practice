#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *prev;
    Node *next;

    // Constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

// traversing a linked list
void print(Node* &head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}

// gives length of linked list
int getLength(Node* head){
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead( Node* &head, int d)
{
     Node *temp = new Node(d);
     temp -> next = head;
     head -> prev = temp;
     head = temp;
}

void insertAtTail(Node* &tail, int d)
{
    Node *temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}
int main()
{
    // Creation of Node
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    insertAtHead(head, 11);
    print(head);

    insertAtTail(tail,20);
    print(head);
    
    cout<< getLength(head) << endl;
    return 0;
}