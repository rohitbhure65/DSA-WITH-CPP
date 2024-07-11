#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val){
    node *n = new node(val);
    n->next=head; // make next of new node as head 
    head=n;
}

void deletion(node* &head, int val){
    node* temp=head;
    while (temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete = temp->next;
    temp->next=temp->next->next;

    delete todelete;
    
}

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout <<"Null"<<endl;
};

int main()
{
    node *head = NULL;
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 7);
    insertAtTail(head, 9);
    display(head);
    insertAtHead(head, 8);
    display(head);
    deletion(head,7);
    display(head);

    return 0;
}