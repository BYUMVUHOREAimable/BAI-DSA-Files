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

// Function to delete the first node from the linked list
void deleteFromBeginning(Node*& head) {
    if (head == nullptr) {
        cout << "Linked list is empty. Cannot delete from beginning." << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

// Function to delete the last node from the linked list
void deleteFromEnd(Node*& head) {
    if (head == nullptr) {
        cout << "Linked list is empty. Cannot delete from end." << endl;
        return;
    }
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}

// Function to delete a node with given value from the linked list
void deleteNode(Node*& head, int target) {
    if (head == nullptr) {
        cout << "Linked list is empty. Cannot delete." << endl;
        return;
    }
    if (head->data == target) {
        deleteFromBeginning(head);
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != target) {
        temp = temp->next;
    }
    if (temp->next == nullptr) {
        cout << "Element " << target << " not found in the linked list. Cannot delete." << endl;
        return;
    }
    Node* toDelete = temp->next;
    temp->next = toDelete->next;
    delete toDelete;
}

// Function to delete a node from the middle of the linked list
void deleteFromMiddle(Node*& head, int position) {
    if (head == nullptr) {
        cout << "Linked list is empty. Cannot delete from middle." << endl;
        return;
    }
    if (position == 0) {
        deleteFromBeginning(head);
        return;
    }
    Node* temp = head;
    for (int i = 0; i < position - 1 && temp->next != nullptr; ++i) {
        temp = temp->next;
    }
    if (temp == nullptr || temp->next == nullptr) {
        cout << "Invalid position. Cannot delete from middle." << endl;
        return;
    }
    Node* toDelete = temp->next;
    temp->next = toDelete->next;
    delete toDelete;
}

int main() {
    // Creating a linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = nullptr;
    for (int i = 1; i <= 5; ++i) {
        insertAtEnd(head, i);
    }
    
    cout << "Linked list before deletion: ";
    printList(head);
    
    // Delete elements from the linked list
    deleteFromBeginning(head);
    cout << "Linked list after deleting from beginning: ";
    printList(head);
    
    deleteFromEnd(head);
    cout << "Linked list after deleting from end: ";
    printList(head);
    
    deleteNode(head, 3);
    cout << "Linked list after deleting value 3: ";
    printList(head);
    
    deleteFromMiddle(head, 1);
    cout << "Linked list after deleting element from middle position 1: ";
    printList(head);
    
    deleteFromMiddle(head, 2); // Invalid position
    cout << "Linked list after attempting to delete from an invalid position: ";
    printList(head);
    
    return 0;
}
