#include "LinkedList.h"

/*
    @author:    func
    @brief:     编写测试函数的地方, 测试自己写的功能无误, 每个操作都需要写一个测试函数
*/
<<<<<<< HEAD
void test_deleteNode()
{
    Node* head = NULL;

    push_back(&head, 1);
    push_back(&head, 2);
    push_back(&head, 3);
    printf("---------------------------------------------\n");
    printf("����ɾ���ڵ�Ĺ���\n");
    printf("���ԭʼ������\n");
    printList(head);
    printf("״��1��ɾ���Ľڵ���С��1\n");
    deleteNode(&head, -1);
    printf("״��2��ɾ������ڵ㣬��ɾ��2�Žڵ�\n");
    deleteNode(&head, 2);
    printf("�޸ĺ������:\n");
    printList(head);
    printf("״��3��ɾ���׽ڵ�\n");
    deleteNode(&head, 0);
    printList(head);
}

void test_findNode(void) {
    Node* head = NULL;
    push_back(&head, 10);
    push_back(&head, 20);
    push_back(&head, 30);

    printf("---------------------------------------------\n");
    printf("���Բ��ҽڵ�Ĺ���\n");
    printf("���ԭʼ������\n");
    printList(head);

    printf("״��1�������ܹ��ҵ���Ԫ�أ������20\n");
    Node* current_1 = find(head, 20);
    if (current_1 != NULL) {
        printf("������ҵ��Ľڵ������: %d\n", current_1->data);
    }
    else {
        printf("δ�ҵ�Ԫ��20��\n");
    }

    printf("״��2�����Ҳ����ҵ���Ԫ�أ������40\n");
    Node* current_2 = find(head, 40);
    if (current_2 != NULL) {
        printf("������ҵ��Ľڵ������: %d\n", current_2->data);
    }
    else {
        printf("δ�ҵ�Ԫ��40��\n");
    }
    printf("------------------------------------------------\n");
}
=======
void test_push_front(){
    push_front(&head1,1);
    push_back(&head1, 2);
    push_back(&head1, 3);
     printf("应该输出 3 2 1\n");
    printf("实际输出 \n");
    printList(head1); 

    destroyList(&head1);
}

void test_push_back(){
    push_front(&head1,1);
    push_back(&head1, 2);
    push_back(&head1, 3);
     printf("应该输出 1 2 3\n");
    printf("实际输出 \n");
    printList(head1); 

    destroyList(&head1);
}

>>>>>>> 5b8e14bc7d7eab7aa86d8d9e108d69b8f7ea9a3a
void test_printList() {
    Node* head = NULL;

    push_back(&head, 10);
    push_back(&head, 20);
    push_back(&head, 30);

    printf("应该输出 10 20 30\n");
    printf("实际输出 \n");

    printList(head); // 应该输出 10 20 30

    destroyList(&head);
}

void test_destroyList() {
    Node* head = NULL;

    push_back(&head, 10);
    push_back(&head, 20);
    push_back(&head, 30);

    destroyList(&head);
    if (head == NULL) {
        printf("测试成功。\n");
    }
    else {
        printf("测试失败。\n");
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
