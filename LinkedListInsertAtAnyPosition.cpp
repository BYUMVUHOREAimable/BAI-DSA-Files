#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node *head = NULL;

Node* insertAtPos(Node *head, int i, int data) {
    if(i < 0) {
        return head;
    }
    if(i == 0) {
        Node* n = new Node(data);
        n->next = head;
        head = n;
        return head;
    }
    Node *temp = head;
    int count = 1;
    while(count <= i - 1 && temp != NULL) {
        temp = temp->next;
        count++;
    }
    if(temp) {
        Node *n = new Node(data);
        n->next = temp->next;
        temp->next = n;
        return head;
    }
    return head;
}

void display(Node* n) {
    while (n != NULL) {
        cout << n->data << "->";
        n = n->next;
    }
    cout << "NULL" << endl;
}

bool search(Node *head, int x) {
    Node *current = head;
    while (current != NULL) {
        if (current->data == x)
            return true;
        current = current->next;
    }
    return false;
}

int search2(Node *head, int key) {
    int index = 1;
    while (head != NULL) {
        if (head->data == key) {
            return index;
        }
        head = head->next;
        index++;
    }
    return 0; // Key not found
}

Node* deleteFirstNode(Node* head) {
    if (head == NULL)
        return NULL;
    Node* temp = head;
    head = temp->next;
    delete temp;
    return head;
}

Node* deleteLastNode(Node* head)
{
    if (head == NULL)
        return NULL;
  
    if (head->next == NULL) {
        delete head;
        return NULL;
    }
  
    // Find the second last node
    Node* second_last = head;
    while (second_last->next->next != NULL)
        second_last = second_last->next;
  
    // Delete last node
    delete (second_last->next);
    // Change next of second last
    second_last->next = NULL;
  
    return head;
}



int main() {
    Node* root = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    root->next = second;
    second->next = third;
    head = root;
    
    head = insertAtPos(head, 4, 250);
    display(head);

    int position = search2(head, 6);
    (position > 0) ? cout << "The key is found at " << position << " node" : cout << "The key is not Found"<<endl;
    if (position > 0)
        cout << "The key is found at " << position << " node"<<endl;
    else
        cout << "The key is not Found"<<endl;

    head = deleteFirstNode(head);
    display(head);

    return 0;
}
