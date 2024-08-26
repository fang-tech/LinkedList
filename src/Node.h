#ifndef     NODE_H
#define     NODE_H

typedef struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
}Node;

// 链表的定义 : 链表本质上就是带有head(并且带有tail)的一连串连接的Node
// 所以定义了head就是在定义一个链表

// 链表1
Node* head1 = NULL;

// 链表2
Node* head2 = NULL;

#endif   // NODE_H