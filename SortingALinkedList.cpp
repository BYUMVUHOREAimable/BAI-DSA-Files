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

// Function to merge two sorted linked lists
Node* merge(Node* left, Node* right) {
    if (left == nullptr) return right;
    if (right == nullptr) return left;

    Node* result = nullptr;
    if (left->data <= right->data) {
        result = left;
        result->next = merge(left->next, right);
    } else {
        result = right;
        result->next = merge(left, right->next);
    }
    return result;
}

// Function to perform Merge Sort on a linked list
Node* mergeSort(Node* head) {
    if (head == nullptr || head->next == nullptr) return head;

    // Find the middle of the linked list
    Node* slow = head;
    Node* fast = head->next;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Split the linked list into two halves
    Node* right = slow->next;
    slow->next = nullptr;

    // Recursively sort the two halves
    Node* leftSorted = mergeSort(head);
    Node* rightSorted = mergeSort(right);

    // Merge the sorted halves
    return merge(leftSorted, rightSorted);
}

int main() {
    // Creating a linked list: 3 -> 1 -> 5 -> 2 -> 4
    Node* head = nullptr;
    insertAtEnd(head, 3);
    insertAtEnd(head, 1);
    insertAtEnd(head, 5);
    insertAtEnd(head, 2);
    insertAtEnd(head, 4);

    cout << "Linked list before sorting: ";
    printList(head);

    // Sort the linked list
    head = mergeSort(head);

    cout << "Linked list after sorting: ";
    printList(head);

    return 0;
}
