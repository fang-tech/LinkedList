#ifndef LINKEDLIST__H
#define LINKEDLIST__H

#include <stdio.h>
#include "Node.h"
#include <stdbool.h>

/*
    @author:    fung
    @brief:     链表的进阶操作集的实现, 以及高级操作集的实现
    @todo:      完成链表的操作集以及测试文件
*/

// 链表的反转
void revers_List(Node *head)
{
    Node *current = head;
    while (current)
    {
        push_front(&head2, current->data);
        current = current->data;
    }
}

// 判断链表中是否有环
bool has_circle(Node *head)
{
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;          // 慢指针移动一步  
        fast = fast->next->next;    // 快指针移动两步  

        if (slow == fast) {         // 如果相遇，说明有环  
            return true;               // 返回 true 表示有环  
        }
    }
    return false;                       // 返回 false 表示没有环  
}

// 合并有序链表, 输出新的链表, 注意输入为有序的链表, 输出链表也要是有序的, 这里规定为升序


Node *merge_list(Node *list_1, Node *list_2) {
    // 创建一个虚拟头节点
    Node dummy;
    Node *tail = &dummy;
    dummy.next = NULL;
    
    // 合并两个有序链表
    while (list_1 != NULL && list_2 != NULL) {
        if (list_1->data <= list_2->data) {
            tail->next = list_1;
            list_1 = list_1->next;
        } else {
            tail->next = list_2;
            list_2 = list_2->next;
        }
        tail = tail->next;
    }
    
    // 连接剩余的部分
    if (list_1 != NULL) {
        tail->next = list_1;
    } else {
        tail->next = list_2;
    }
    
    return dummy.next;
}


/*
    @author:    fung
    @brief:     链表的基础操作集的实现, 以及高级操作集的实现
    @todo:      完成链表的操作集以及测试文件
*/

//-------------------------  基础操作集   -------------------------

// 头插法插入元素
int push_front(Node **head, int data)
{
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
int push_back(Node **head, int data)
{
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
void deleteNode(Node **head, int index)
{
    if (head == NULL || *head == NULL)
    {
        printf("链表为空，无法删除节点。\n");
        return;
    }

    if (index < 0)
    {
        printf("结点数不应小于0,请输入正确结点数。\n");
        return;
    }

    Node *current = *head;

    // 遍历到指定索引
    for (int i = 0; i < index; i++)
    {
        if (current == NULL)
        {
            printf("索引超出链表范围。\n");
            return;
        }
        current = current->next;
    }

    // 如果当前节点为NULL，表示索引超出范围
    if (current == NULL)
    {
        printf("索引超出链表范围。\n");
        return;
    }

    // 删除节点
    if (current == *head)
    {
        // 删除头节点
        *head = current->next;
        if (*head != NULL)
        {
            (*head)->prev = NULL; // 更新新的头节点的prev指针
        }
    }
    else
    {
        // 连接前后节点
        if (current->next != NULL)
        {
            current->next->prev = current->prev;
        }
        current->prev->next = current->next;
    }

    free(current); // 释放节点内存
}

// 查找节点 (按值查找), 返回节点位置, 如果没找到, 返回为空
Node *find(Node *head, int data)
{
    Node *current = head;
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
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// 销毁链表
void destroyList(Node **head)
{
    Node *current = *head;
    Node *next_node;

    while (current != NULL)
    {
        next_node = current->next;
        free(current);
        current = next_node;
    }

    *head = NULL;
}
//-------------------------  基础操作集   -------------------------

#endif // LINKEDLIST__H
