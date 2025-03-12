//
// Created by Administrator on 2025/3/12.
//
#include <stdio.h>
#include <stdlib.h>

typedef int E;

struct ListNode{
    E element;
    struct ListNode * next;
};

typedef struct ListNode* Node;

/**
 * 初始化头节点
 * @param head
 */
void initNode(Node head){
    head->next = NULL;
}

/**
 * 插入节点
 * @param head
 * @param element
 * @param index
 * @return
 */
_Bool insertNode(Node head, E element, int index){
    if(index < 1) return 0;
    while(--index){
        head = head->next;
        if(head == NULL) return 0;
    }
    Node node = malloc(sizeof(struct ListNode));
    node->next = head->next;
    node->element = element;
    head->next = node;
    return 1;
}

/**
 * 删除节点
 * @param head
 * @param element
 * @param index
 * @return
 */
_Bool deleteNode(Node head, E element, int index){
    if(index < 1) return 0;
    while(--index){
        head = head->next;
        if(head == NULL) return 0;
    }
    if(head->next = NULL) return 0;
    Node temp = head->next;
    head->next = head->next->next;
    free(temp);
    return 1;
}

/**
 * 打印整个列表
 * @param head
 */
void printList(Node head){
    while(head->next != NULL){
        head = head->next;
        printf("%d ", head->element);
    }
}

/**
 * 找第几个节点元素地址
 * @param head
 * @param index
 * @return
 */
E * getList(Node head, int index){
    if(index < 1) return 0;
    do{
        head = head->next;
        if(head == NULL) return 0;
    }while(--index);
    return &head->element;
}

/**
 * 找元素的位置
 * @param head
 * @param element
 * @return
 */
int findList(Node head, E element){
    int i = 0;
    do{
        head = head->next;
        if(head == NULL) return -1;
        i++;
    }while(head->element != element);
    return i;
}

int main(){
    struct ListNode node;
    initNode(&node);
    for (int i = 1; i < 4; ++i) {
        insertNode(&node, i * 100, i);
    }
    printList(&node);
    printf("%d", findList(&node, 200));

}
