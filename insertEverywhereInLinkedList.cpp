#include <iostream>

using namespace std;

// Define a Node structure
struct Node {
    int data;
    Node* next;
    
    // Constructor
    Node(int val) : data(val), next(nullptr) {}
};

// Function to insert a new node at the beginning of the linked list
void insertAtBeginning(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

// Function to insert a new node after a given node in the linked list
void insertAfter(Node* prevNode, int val) {
    if (prevNode == nullptr) {
        cout << "Previous node cannot be null." << endl;
        return;
    }
    Node* newNode = new Node(val);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

// Function to insert a new node at the end of the linked list
void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Creating a linked list: 1 -> 2 -> 3
    Node* head = nullptr;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    
    cout << "Initial linked list: ";
    printList(head);
    
    // Inserting a new node at the beginning: 0 -> 1 -> 2 -> 3
    insertAtBeginning(head, 0);
    cout << "Linked list after inserting at the beginning: ";
    printList(head);
    
    // Inserting a new node after the second node: 0 -> 1 -> 4 -> 2 -> 3
    insertAfter(head->next->next, 4);
    cout << "Linked list after inserting after the second node: ";
    printList(head);
    
    // Inserting a new node at the end: 0 -> 1 -> 4 -> 2 -> 3 -> 5
    insertAtEnd(head, 5);
    cout << "Linked list after inserting at the end: ";
    printList(head);
    
    return 0;
}
