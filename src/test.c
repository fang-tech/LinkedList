#include <stdio.h>  
#include "LinkedList.h"  
#include "Node.h"

int main() {
    DoublyLinkedList* list = create_list();

    push_front(list, 1);
    push_front(list, 2);
    push_back(list, 3);
    push_back(list, 4);

    printf("添加节点后的链表");
    printList(list);

    printf("删除节点2\n");
    deleteNode(list, 2);
    printf("删除节点后的链表：");
    printList(list);

    Node* found = find(list, 3);
    if (found) {
        printf("找到数据为%d的节点\n", found->data);
    }
    else {
        printf("没有找到相应的节点\n");
    }

    destoryList(list);
    return 0;
}

