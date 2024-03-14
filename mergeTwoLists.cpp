#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

Node* merge(Node* a, Node* b) {
    // Base case
    if (a == nullptr)
        return b;
    if (b == nullptr)
        return a;
 
    // Recursive case
    Node* c = nullptr;
    if (a->data < b->data) {
        c = a;
        c->next = merge(a->next, b);
    } else {
        c = b;
        c->next = merge(a, b->next);
    }
 
    return c;
}

// Function to print the linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Example usage
    Node* a = new Node(1);
    a->next = new Node(3);
    a->next->next = new Node(5);

    Node* b = new Node(2);
    b->next = new Node(4);
    b->next->next = new Node(6);

    Node* merged = merge(a, b);
    cout << "Merged List: ";
    printList(merged);

    // Free memory
    delete a->next->next;
    delete a->next;
    delete a;
    delete b->next->next;
    delete b->next;
    delete b;
    
    return 0;
}
