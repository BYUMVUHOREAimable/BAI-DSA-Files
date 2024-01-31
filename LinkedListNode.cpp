#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node() {}
    Node(int d) {
        data = d;
        next = NULL;
    }
};

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

Node* addAtHead(Node* head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    return head;
}

Node* addNode(Node* head, Node* sn) {
    sn->next = head;
    head = sn;
    return head;
}

Node* addAtTail(Node* head, int value) {
    Node* newNode = new Node(value);
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

int main() {
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);
    n1->next = n2;
    n2->next = n3;
    Node* head = n1;

    printList(head);

    cout << "After adding an element at the head:" << endl;
    head = addAtHead(head, 8);
    printList(head);

    cout << "After adding an element at the head:" << endl;
    printList(addAtHead(head, 50));

    Node* n5 = new Node(26);
    head = addNode(head, n5);

    cout << "After adding an element at the tail:" << endl;
    head = addAtTail(head, 200);
    printList(head);

    cout << "After adding an element at the tail:" << endl;
    printList(addAtTail(head, 500));

    Node* n6 = new Node(60);
    head = addNode(head, n6);

    return 0;
}
