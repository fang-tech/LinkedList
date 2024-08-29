# ifndef NODE_H
# define NODE_H

typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

typedef struct DoublyLinkedList {
    Node* head;
    Node* tail;
} DoublyLinkedList;


# endif

