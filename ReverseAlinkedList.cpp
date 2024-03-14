#include <iostream>

using namespace std;

// Define a Node structure
struct Node {
    int data;
    Node* next;

    // Constructor
    Node(int val) : data(val), next(nullptr) {}
};

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

// Function to reverse the linked list
Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* nextNode = nullptr;
    
    while (current != nullptr) {
        nextNode = current->next; // Store the next node
        current->next = prev; // Reverse the pointer
        prev = current; // Move pointers one position ahead
        current = nextNode;
    }
    return prev; // New head of the reversed list
}

int main() {
    // Creating a linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = nullptr;
    for (int i = 1; i <= 5; ++i) {
        insertAtEnd(head, i);
    }

    cout << "Linked list before reversing: ";
    printList(head);

    // Reverse the linked list
    head = reverseLinkedList(head);

    cout << "Linked list after reversing: ";
    printList(head);

    return 0;
}
