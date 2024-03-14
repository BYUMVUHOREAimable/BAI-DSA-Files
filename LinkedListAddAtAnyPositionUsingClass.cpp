#include <iostream>
// Node class
class Node {
public:
    int data;
    Node* next;
    Node(int newData) : data(newData), next(nullptr) {}
};

// LinkedList class
class LinkedList {
public:
    Node* head;
    LinkedList() : head(nullptr) {}

    // Function to insert a new node at a given position
    void insertNode(int position, int newData) {
        Node* newNode = new Node(newData);

        if (position == 0) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;
        for (int i = 0; i < position - 1 && temp != nullptr; i++)
            temp = temp->next;

        if (temp == nullptr)
            return;

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Function to print the linked list
    void printList() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "NULL" << std::endl;
    }
};

int main() {
    LinkedList linkedList;

    linkedList.insertNode(0, 1);
    linkedList.insertNode(1, 3);
    linkedList.insertNode(1, 2);

    std::cout << "Linked List: ";
    linkedList.printList();

    return 0;
}
