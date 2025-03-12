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
 * ��ʼ��ͷ�ڵ�
 * @param head
 */
void initNode(Node head){
    head->next = NULL;
}

/**
 * ����ڵ�
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
 * ɾ���ڵ�
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
 * ��ӡ�����б�
 * @param head
 */
void printList(Node head){
    while(head->next != NULL){
        head = head->next;
        printf("%d ", head->element);
    }
}

/**
 * �ҵڼ����ڵ�Ԫ�ص�ַ
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
 * ��Ԫ�ص�λ��
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
