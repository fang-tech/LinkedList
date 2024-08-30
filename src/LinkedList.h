#ifndef LINKEDLIST__H
#define LINKEDLIST__H

#include <stdio.h>
#include "Node.h"

/*
    @author:    fung
    @brief:     é“¾è¡¨çš„åŸºç¡€æ“ä½œé›†çš„å®ç°, ä»¥åŠé«˜çº§æ“ä½œé›†çš„å®ç°
    @todo:      å®Œæˆé“¾è¡¨çš„æ“ä½œé›†ä»¥åŠæµ‹è¯•æ–‡ä»¶
*/

//-------------------------  åŸºç¡€æ“ä½œé›†   -------------------------

// å¤´æ’æ³•æ’å…¥å…ƒç´ 
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

// å°¾æ’æ³•æ’å…¥å…ƒç´ 
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

// åˆ é™¤indexä½ç½®çš„èŠ‚ç‚¹
void deleteNode(Node** head, int index) 
{
    if (head == NULL || *head == NULL) {
        printf("Á´±íÎª¿Õ£¬ÎŞ·¨É¾³ı½Úµã¡£\n");
        return;
    }

    if (index < 0) {
        printf("½áµãÊı²»Ó¦Ğ¡ÓÚ0,ÇëÊäÈëÕıÈ·½áµãÊı¡£\n");
        return;
    }

    Node* current = *head;

    // ±éÀúµ½Ö¸¶¨Ë÷Òı  
    for (int i = 0; i < index; i++) {
        if (current == NULL) {
            printf("Ë÷Òı³¬³öÁ´±í·¶Î§¡£\n");
            return;
        }
        current = current->next;
    }

    // Èç¹ûµ±Ç°½ÚµãÎªNULL£¬±íÊ¾Ë÷Òı³¬³ö·¶Î§  
    if (current == NULL) {
        printf("Ë÷Òı³¬³öÁ´±í·¶Î§¡£\n");
        return;
    }

    // É¾³ı½Úµã  
    if (current == *head) {
        // É¾³ıÍ·½Úµã  
        *head = current->next;
        if (*head != NULL) {
            (*head)->prev = NULL; // ¸üĞÂĞÂµÄÍ·½ÚµãµÄprevÖ¸Õë  
        }
    }
    else {
        // Á¬½ÓÇ°ºó½Úµã  
        if (current->next != NULL) {
            current->next->prev = current->prev;
        }
        current->prev->next = current->next;
    }

    free(current); // ÊÍ·Å½ÚµãÄÚ´æ  
}

// æŸ¥æ‰¾èŠ‚ç‚¹ (æŒ‰å€¼æŸ¥æ‰¾), è¿”å›èŠ‚ç‚¹ä½ç½®, å¦‚æœæ²¡æ‰¾åˆ°, è¿”å›ä¸ºç©º
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

// éå†é“¾è¡¨
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// é”€æ¯é“¾è¡¨
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
//-------------------------  åŸºç¡€æ“ä½œé›†   -------------------------


#endif  // LINKEDLIST__H
