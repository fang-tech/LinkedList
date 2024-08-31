#ifndef LINKEDLIST__H
#define LINKEDLIST__H

#include <stdio.h>
#include "Node.h"

/*
    @author:    fung
    @brief:     链表的基础操作集的实现, 以及高级操作集的实现
    @todo:      完成链表的操作集以及测试文件
*/

//-------------------------  基础操作集   -------------------------

// 头插法插入元素
int push_front(Node** head, int data){
     Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = *head;
    if (*head != NULL)
    {
        (*head)->prev = newNode;
    }
    *head = newNode;
    return 0;
}

// 尾插法插入元素
int push_back(Node** head, int data){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL)
    {
        newNode->prev = NULL;
        *head = newNode;
        return 0;
    }
    Node *tail = *head;
    while (tail->next)
    {
        tail = tail->next;
    }
    tail->next = newNode;
    newNode->prev = tail;
    return 0;
}

// 删除index位置的节点
void deleteNode(Node** head, int index) 
{
    if (head == NULL || *head == NULL) {
        printf("链表为空，无法删除节点。\n");
        return;
    }

    if (index < 0) {
        printf("结点数不应小于0,请输入正确结点数。\n");
        return;
    }

    Node* current = *head;

    // 遍历到指定索引  
    for (int i = 0; i < index; i++) {
        if (current == NULL) {
            printf("索引超出链表范围。\n");
            return;
        }
        current = current->next;
    }

    // 如果当前节点为NULL，表示索引超出范围  
    if (current == NULL) {
        printf("索引超出链表范围。\n");
        return;
    }

    // 删除节点  
    if (current == *head) {
        // 删除头节点  
        *head = current->next;
        if (*head != NULL) {
            (*head)->prev = NULL; // 更新新的头节点的prev指针  
        }
    }
    else {
        // 连接前后节点  
        if (current->next != NULL) {
            current->next->prev = current->prev;
        }
        current->prev->next = current->next;
    }

    free(current); // 释放节点内存  
}

// 查找节点 (按值查找), 返回节点位置, 如果没找到, 返回为空
Node* find(Node* head, int data)
{
    Node* current = head;
    while (current != NULL)
    {
        if (current->data == data)
        {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

// 遍历链表
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// 销毁链表
void destroyList(Node** head) {
    Node* current = *head;
    Node* next_node;

    while (current != NULL) {
        next_node = current->next;
        free(current);
        current = next_node;
    }

    *head = NULL;
}
//-------------------------  基础操作集   -------------------------


#endif  // LINKEDLIST__H
