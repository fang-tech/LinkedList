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
int push_front(Node** head, int data);

// 尾插法插入元素
int push_back(Node** head, int data);

// 删除index位置的节点
void deleteNode(Node** head, int index);

// 查找节点 (按值查找), 返回节点位置, 如果没找到, 返回为空
Node* find(Node* head, int data);

// 遍历链表
void printList(Node* head);

// 销毁链表
void destroyList(Node** head);

//-------------------------  基础操作集   -------------------------


#endif  // LINKEDLIST__H