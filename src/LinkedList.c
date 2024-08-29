#include <stdio.h>  
#include <stdlib.h>  
#include "LinkedList.h"
#include "Node.h"

// 创建链表  
DoublyLinkedList* create_list()
{
    DoublyLinkedList* list = (DoublyLinkedList*)malloc(sizeof(DoublyLinkedList));
    list->head = NULL;
    list->tail = NULL;
    return list;
}

// 在头部添加节点  
void push_front(DoublyLinkedList* list, int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = list->head;
    new_node->prev = NULL;

    if (list->head != NULL) {
        list->head->prev = new_node;
    }
    else {
        list->tail = new_node; // 如果链表为空，新节点也是尾节点  
    }

    list->head = new_node;
}

// 在尾部添加节点  
void push_back(DoublyLinkedList* list, int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = list->tail;

    if (list->tail != NULL) {
        list->tail->next = new_node;
    }
    else {
        list->head = new_node; // 如果链表为空，新节点也是头节点  
    }

    list->tail = new_node;
}

// 删除节点  
void deleteNode(DoublyLinkedList* list, int data) {
    Node* current = list->head;
    while (current != NULL) {
        if (current->data == data) {
            if (current->prev != NULL) {
                current->prev->next = current->next;
            }
            else {
                list->head = current->next; // 删除头节点  
            }

            if (current->next != NULL) {
                current->next->prev = current->prev;
            }
            else {
                list->tail = current->prev; // 删除尾节点  
            }

            free(current);
            return;
        }
        current = current->next;
    }
}

// 查找节点  
Node* find(DoublyLinkedList* list, int data) {
    Node* current = list->head;
    while (current != NULL) {
        if (current->data == data) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

// 遍历链表  
void printList(DoublyLinkedList* list) {
    Node* current = list->head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// 销毁链表  
void destoryList(DoublyLinkedList* list) {
    Node* current = list->head;
    while (current != NULL) {
        Node* next = current->next;
        free(current);
        current = next;
    }
    free(list);
}
