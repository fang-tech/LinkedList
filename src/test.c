#include "LinkedList.h"

/*
    @author:    func
    @brief:     编写测试函数的地方, 测试自己写的功能无误, 每个操作都需要写一个测试函数
*/
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

int main(){
    test_printList();
    test_destroyList();

    return 0;
}