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

// Function to insert a new node after a given node
void insertAfter(struct Node* prevNode, int data) {
    if (prevNode == NULL) {
        printf("Previous node cannot be NULL\n");
        return;
    }
    struct Node* newNode = createNode(data);
    newNode->next = prevNode->next;
    if (prevNode->next != NULL) {
        prevNode->next->prev = newNode;
    }
    prevNode->next = newNode;
    newNode->prev = prevNode;
}

// Function to insert a new node before a given node
void insertBefore(struct Node** head, struct Node* nextNode, int data) {
    if (nextNode == NULL) {
        printf("Next node cannot be NULL\n");
        return;
    }
    struct Node* newNode = createNode(data);
    newNode->prev = nextNode->prev;
    if (nextNode->prev != NULL) {
        nextNode->prev->next = newNode;
    } else {
        *head = newNode;
    }
    nextNode->prev = newNode;
    newNode->next = nextNode;
}

// Function to delete a node from the list
void deleteNode(struct Node** head, struct Node* delNode) {
    if (*head == NULL || delNode == NULL) {
        return;
    }
    if (*head == delNode) {
        *head = delNode->next;
    }
    if (delNode->next != NULL) {
        delNode->next->prev = delNode->prev;
    }
    if (delNode->prev != NULL) {
        delNode->prev->next = delNode->next;
    }
    free(delNode);
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
    while (head->next != NULL) {
        head = head->next;
    }
    printf("Backward traversal: ");
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
    insertAtEnd(&head, 10);
    insertAtBeginning(&head, 5);
    insertAtEnd(&head, 20);
    insertAfter(head->next, 15);
    insertBefore(&head, head->next->next, 25);

    // Traverse forward and backward
    traverseForward(head);
    traverseBackward(head);

    // Delete a node
    deleteNode(&head, head->next->next->next);

    // Traverse forward after deletion
    traverseForward(head);

    // Free the memory allocated to the list
    freeList(head);

    return 0;
}
