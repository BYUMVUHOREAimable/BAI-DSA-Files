#include <stdio.h>
#include <stdlib.h>

// Define the structure for a doubly linked list node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the beginning of the list
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
}

// Function to insert a new node at the end of the list
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

// Function to delete a node from the list
void deleteNode(struct Node** head, int key) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = *head;
    // If the key is found at the head node
    if (temp->data == key) {
        *head = temp->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(temp);
        return;
    }
    // Traverse the list to find the node to delete
    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Key not found in the list\n");
        return;
    }
    temp->prev->next = temp->next;
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
    free(temp);
}

// Function to traverse the list forward and print the data of each node
void traverseForward(struct Node* head) {
    printf("Forward traversal: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Function to traverse the list backward and print the data of each node
void traverseBackward(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    // Traverse to the last node
    while (head->next != NULL) {
        head = head->next;
    }
    printf("Backward traversal: ");
    // Traverse backward and print data
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->prev;
    }
    printf("\n");
}

// Function to free the memory allocated to the list
void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    struct Node* head = NULL; // Initialize an empty list

    // Insert some nodes
    insertAtBeginning(&head, 10);
    insertAtEnd(&head, 20);
    insertAtBeginning(&head, 5);
    insertAtEnd(&head, 30);

    // Traverse forward and backward
    traverseForward(head);
    traverseBackward(head);

    // Delete a node
    deleteNode(&head, 20);

    // Traverse forward after deletion
    traverseForward(head);

    // Free the memory allocated to the list
    freeList(head);

    return 0;
}
