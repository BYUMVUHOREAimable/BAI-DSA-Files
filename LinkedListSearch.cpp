#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

bool searchInLinkedList(Node* head, int key) {
    Node* current = head;

    while (current != nullptr) {
        if (current->data == key) {
            // Element found
            return true;
        }
        current = current->next;
    }

    // Element not found
    return false;
}

int main() {
    // Creating a linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Searching for elements
    int keyToSearch = 3;
    if (searchInLinkedList(head, keyToSearch)) {
        cout << "Element " << keyToSearch << " found in the linked list." << endl;
    } else {
        cout << "Element " << keyToSearch << " not found in the linked list." << endl;
    }

    keyToSearch = 7;
    if (searchInLinkedList(head, keyToSearch)) {
        cout << "Element " << keyToSearch << " found in the linked list." << endl;
    } else {
        cout << "Element " << keyToSearch << " not found in the linked list." << endl;
    }

    return 0;
}
