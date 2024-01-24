#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void printList(Node* head) {
    // To print a linked list, we only need to know the first element called head
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* n1 = new Node();
    n1->data = 10;

    Node* n2 = new Node();
    n2->data = 15;

    Node* n3 = new Node();
    n3->data = 20;

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    Node* head = n1;
    cout << "The data from head: ";
    printList(head);
    cout << endl;
    cout << "The data from n1: ";
    printList(n1);

    return 0;
}
