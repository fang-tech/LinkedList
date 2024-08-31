#include "LinkedList.h"

/*
    @author:    func
    @brief:     ç¼–å†™æµ‹è¯•å‡½æ•°çš„åœ°æ–¹, æµ‹è¯•è‡ªå·±å†™çš„åŠŸèƒ½æ— è¯¯, æ¯ä¸ªæ“ä½œéƒ½éœ€è¦å†™ä¸€ä¸ªæµ‹è¯•å‡½æ•°
*/
<<<<<<< HEAD
void test_deleteNode()
{
    Node* head = NULL;

    push_back(&head, 1);
    push_back(&head, 2);
    push_back(&head, 3);
    printf("---------------------------------------------\n");
    printf("²âÊÔÉ¾³ı½ÚµãµÄ¹¦ÄÜ\n");
    printf("Êä³öÔ­Ê¼Á´±í£º\n");
    printList(head);
    printf("×´¿ö1£ºÉ¾³ıµÄ½ÚµãÊıĞ¡ÓÚ1\n");
    deleteNode(&head, -1);
    printf("×´¿ö2£ºÉ¾³ıÈÎÒâ½Úµã£¬ÈçÉ¾³ı2ºÅ½Úµã\n");
    deleteNode(&head, 2);
    printf("ĞŞ¸ÄºóµÄÁ´±í:\n");
    printList(head);
    printf("×´¿ö3£ºÉ¾³ıÊ×½Úµã\n");
    deleteNode(&head, 0);
    printList(head);
}

void test_findNode(void) {
    Node* head = NULL;
    push_back(&head, 10);
    push_back(&head, 20);
    push_back(&head, 30);

    printf("---------------------------------------------\n");
    printf("²âÊÔ²éÕÒ½ÚµãµÄ¹¦ÄÜ\n");
    printf("Êä³öÔ­Ê¼Á´±í£º\n");
    printList(head);

    printf("×´¿ö1£º²éÕÒÄÜ¹»ÕÒµ½µÄÔªËØ£¬Èç²éÕÒ20\n");
    Node* current_1 = find(head, 20);
    if (current_1 != NULL) {
        printf("Êä³ö²éÕÒµ½µÄ½ÚµãµÄÊı×Ö: %d\n", current_1->data);
    }
    else {
        printf("Î´ÕÒµ½ÔªËØ20¡£\n");
    }

    printf("×´¿ö2£º²éÕÒ²»ÄÜÕÒµ½µÄÔªËØ£¬Èç²éÕÒ40\n");
    Node* current_2 = find(head, 40);
    if (current_2 != NULL) {
        printf("Êä³ö²éÕÒµ½µÄ½ÚµãµÄÊı×Ö: %d\n", current_2->data);
    }
    else {
        printf("Î´ÕÒµ½ÔªËØ40¡£\n");
    }
    printf("------------------------------------------------\n");
}
=======
void test_push_front(){
    push_front(&head1,1);
    push_back(&head1, 2);
    push_back(&head1, 3);
     printf("åº”è¯¥è¾“å‡º 3 2 1\n");
    printf("å®é™…è¾“å‡º \n");
    printList(head1); 

    destroyList(&head1);
}

void test_push_back(){
    push_front(&head1,1);
    push_back(&head1, 2);
    push_back(&head1, 3);
     printf("åº”è¯¥è¾“å‡º 1 2 3\n");
    printf("å®é™…è¾“å‡º \n");
    printList(head1); 

    destroyList(&head1);
}

>>>>>>> 5b8e14bc7d7eab7aa86d8d9e108d69b8f7ea9a3a
void test_printList() {
    Node* head = NULL;

    push_back(&head, 10);
    push_back(&head, 20);
    push_back(&head, 30);

    printf("åº”è¯¥è¾“å‡º 10 20 30\n");
    printf("å®é™…è¾“å‡º \n");

    printList(head); // åº”è¯¥è¾“å‡º 10 20 30

    destroyList(&head);
}

void test_destroyList() {
    Node* head = NULL;

    push_back(&head, 10);
    push_back(&head, 20);
    push_back(&head, 30);

    destroyList(&head);
    if (head == NULL) {
        printf("æµ‹è¯•æˆåŠŸã€‚\n");
    }
    else {
        printf("æµ‹è¯•å¤±è´¥ã€‚\n");
    }
}

<<<<<<< HEAD
void test_deleteNode()
{
    Node* head = NULL;
=======
int main(){
<<<<<<< HEAD
    test_deleteNode();
    test_findNode();
=======
    test_push_front();
    test_push_back();
>>>>>>> 5b8e14bc7d7eab7aa86d8d9e108d69b8f7ea9a3a
    test_printList();
    test_destroyList();
>>>>>>> 9f8360905f389559a494630b2076e8d37eae6e7a

    push_back(&head, 1);
    push_back(&head, 2);
    push_back(&head, 3);
    printf("---------------------------------------------\n");
    printf("æµ‹è¯•åˆ é™¤èŠ‚ç‚¹çš„åŠŸèƒ½\n");
    printf("è¾“å‡ºåŸå§‹é“¾è¡¨ï¼š\n");
    printList(head);
    printf("çŠ¶å†µ1ï¼šåˆ é™¤çš„èŠ‚ç‚¹æ•°å°äº1\n");
    deleteNode(&head, -1);
    printf("çŠ¶å†µ2ï¼šåˆ é™¤ä»»æ„èŠ‚ç‚¹ï¼Œå¦‚åˆ é™¤2å·èŠ‚ç‚¹\n");
    deleteNode(&head, 2);
    printf("ä¿®æ”¹åçš„é“¾è¡¨:\n");
    printList(head);
    printf("çŠ¶å†µ3ï¼šåˆ é™¤é¦–èŠ‚ç‚¹\n");
    deleteNode(&head, 0);
    printList(head);
}

void test_findNode(void) {
    Node* head = NULL;
    push_back(&head, 10);
    push_back(&head, 20);
    push_back(&head, 30);

    printf("---------------------------------------------\n");
    printf("æµ‹è¯•æŸ¥æ‰¾èŠ‚ç‚¹çš„åŠŸèƒ½\n");
    printf("è¾“å‡ºåŸå§‹é“¾è¡¨ï¼š\n");
    printList(head);

    printf("çŠ¶å†µ1ï¼šæŸ¥æ‰¾èƒ½å¤Ÿæ‰¾åˆ°çš„å…ƒç´ ï¼Œå¦‚æŸ¥æ‰¾20\n");
    Node* current_1 = find(head, 20);
    if (current_1 != NULL) {
        printf("è¾“å‡ºæŸ¥æ‰¾åˆ°çš„èŠ‚ç‚¹çš„æ•°å­—: %d\n", current_1->data);
    }
    else {
        printf("æœªæ‰¾åˆ°å…ƒç´ 20ã€‚\n");
    }

    printf("çŠ¶å†µ2ï¼šæŸ¥æ‰¾ä¸èƒ½æ‰¾åˆ°çš„å…ƒç´ ï¼Œå¦‚æŸ¥æ‰¾40\n");
    Node* current_2 = find(head, 40);
    if (current_2 != NULL) {
        printf("è¾“å‡ºæŸ¥æ‰¾åˆ°çš„èŠ‚ç‚¹çš„æ•°å­—: %d\n", current_2->data);
    }
    else {
        printf("æœªæ‰¾åˆ°å…ƒç´ 40ã€‚\n");
    }
    printf("------------------------------------------------\n");
}
int main(){
    test_deleteNode();
    test_findNode();
    return 0;
}
