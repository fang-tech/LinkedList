#include "LinkedList.h"

/*
    @author:    func
    @brief:     编写测试函数的地方, 测试自己写的功能无误, 每个操作都需要写一个测试函数
*/

void test_deleteNode()
{
    Node* head = NULL;

    push_back(&head, 1);
    push_back(&head, 2);
    push_back(&head, 3);
    printf("---------------------------------------------\n");
    printf("测试删除节点的功能\n");
    printf("输出原始链表：\n");
    printList(head);
    printf("状况1：删除的节点数小于1\n");
    deleteNode(&head, -1);
    printf("状况2：删除任意节点，如删除2号节点\n");
    deleteNode(&head, 2);
    printf("修改后的链表:\n");
    printList(head);
    printf("状况3：删除首节点\n");
    deleteNode(&head, 0);
    printList(head);
}

void test_findNode(void) {
    Node* head = NULL;
    push_back(&head, 10);
    push_back(&head, 20);
    push_back(&head, 30);

    printf("---------------------------------------------\n");
    printf("测试查找节点的功能\n");
    printf("输出原始链表：\n");
    printList(head);

    printf("状况1：查找能够找到的元素，如查找20\n");
    Node* current_1 = find(head, 20);
    if (current_1 != NULL) {
        printf("输出查找到的节点的数字: %d\n", current_1->data);
    }
    else {
        printf("未找到元素20。\n");
    }

    printf("状况2：查找不能找到的元素，如查找40\n");
    Node* current_2 = find(head, 40);
    if (current_2 != NULL) {
        printf("输出查找到的节点的数字: %d\n", current_2->data);
    }
    else {
        printf("未找到元素40。\n");
    }
    printf("------------------------------------------------\n");
}
int main(){
    test_deleteNode();
    test_findNode();
    return 0;
}