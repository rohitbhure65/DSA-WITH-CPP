#include <iostream> // Includes the input-output stream library for functions like cout
using namespace std; // Allows usage of standard library names without the std:: prefix

class node { // Defines a class called node
public:
    int data; // Integer data field to store the value of the node
    node *next; // Pointer to the next node in the list

    node(int val) { // Constructor to initialize the node with a value
        data = val; // Sets the data field to val
        next = NULL; // Sets the next pointer to NULL (no next node initially)
    }
};

void insertAtHead(node* &head, int val) { // Function to insert a node at the head of the list
    node *n = new node(val); // Creates a new node with the given value
    n->next = head; // Makes the new node's next point to the current head
    head = n; // Updates the head to be the new node
}

void deletion(node* &head, int val) { // Function to delete a node with a given value from the list
    if (head == NULL) return; // If the list is empty, do nothing

    if (head->data == val) { // If the head needs to be deleted
        node* todelete = head; // Store the head node in a temporary pointer
        head = head->next; // Update the head to the next node
        delete todelete; // Delete the old head
        return;
    }

    node* temp = head; // Start from the head node
    while (temp->next != NULL && temp->next->data != val) { // Traverse the list to find the node before the one to be deleted
        temp = temp->next;
    }

    if (temp->next == NULL) return; // If the value was not found, do nothing

    node* todelete = temp->next; // Store the node to be deleted
    temp->next = temp->next->next; // Update the next pointer to skip the deleted node
    delete todelete; // Delete the node
}

void insertAtTail(node *&head, int val) { // Function to insert a node at the tail of the list
    node *n = new node(val); // Creates a new node with the given value
    if (head == NULL) { // If the list is empty
        head = n; // The new node becomes the head
        return;
    }

    node *temp = head; // Start from the head node
    while (temp->next != NULL) // Traverse to the end of the list
        temp = temp->next;
    temp->next = n; // Link the last node to the new node
}

void display(node *head) { // Function to display the list
    node *temp = head; // Start from the head node
    while (temp != NULL) { // Traverse the list
        cout << temp->data << "->"; // Print the data of each node
        temp = temp->next; // Move to the next node
    }
    cout << "NULL" << endl; // Print NULL at the end of the list
}

int main() { // Main function where the program execution starts
    node *head = NULL; // Initializes the head of the list to NULL

    insertAtTail(head, 4); // Inserts a node with value 4 at the tail
    insertAtTail(head, 5); // Inserts a node with value 5 at the tail
    insertAtTail(head, 7); // Inserts a node with value 7 at the tail
    insertAtTail(head, 9); // Inserts a node with value 9 at the tail
    display(head); // Displays the list: 4->5->7->9->NULL

    insertAtHead(head, 8); // Inserts a node with value 8 at the head
    display(head); // Displays the list: 8->4->5->7->9->NULL

    deletion(head, 7); // Deletes the node with value 7
    display(head); // Displays the list: 8->4->5->9->NULL

    return 0; // Returns 0 to indicate successful program termination
}