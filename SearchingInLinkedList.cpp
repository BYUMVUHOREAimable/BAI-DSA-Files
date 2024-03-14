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

// Function to search for a value in the linked list and return its position
// Returns -1 if the value is not found
int search(Node* head, int target) {
    Node* current = head;
    int position = 0;
    while (current != nullptr) {
        if (current->data == target) {
            return position; // Found the target value at this position
        }
        current = current->next;
        position++;
    }
    return -1; // Target value not found
}

int main() {
    // Creating a linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = nullptr;
    for (int i = 1; i <= 5; ++i) {
        insertAtEnd(head, i);
    }
    
    cout << "Linked list: ";
    printList(head);
    
    // Search for values in the linked list
    int targets[] = {3, 6};
    for (int target : targets) {
        int position = search(head, target);
        if (position != -1) {
            cout << "Value " << target << " found at position " << position << " in the linked list." << endl;
        } else {
            cout << "Value " << target << " not found in the linked list." << endl;
        }
    }
    
    return 0;
}
