//
// Created by Administrator on 2025/3/10.
//
/**
 * ���Ա�ʵ��
 */

#include <stdio.h>
#include <stdlib.h>

typedef int E;

typedef struct List{
    E * array;
    int capacity;
    int size;
} * ArrayList;

/**
 * ��ʼ��
 * @param list
 * @return
 */
int initList(ArrayList list){
    list -> array = malloc(sizeof(E) * 10);
    if(list -> array == NULL) return -1;
    list -> capacity = 10;
    list -> size = 0;
    return 0;
}

/**
 * ����
 * @param list
 * @param element
 * @param index
 * @return
 */
_Bool insertList(ArrayList list, E element, int index){
    if(index < 1 || index > list -> size + 1) return 0;
    if(list -> size == list -> capacity) {
        int newCapacity = list->capacity + (list -> capacity >>1);
        E * newArray = realloc(list -> array, sizeof(E)*newCapacity);
        if(newArray == NULL) return 0;
        list -> array = newArray;
        list -> capacity = newCapacity;
    }
    for(int i = list -> size; i > index-1; --i){
        *(list -> array + i) = *(list -> array + i -1);
    }
    *(list -> array + index - 1) = element;
    list -> size++;
    return 1;
}

/**
 * ɾ������
 * @param list
 * @param index
 * @return
 */
_Bool deleteList(ArrayList list, int index){
    if(index < 1 || index > list -> size) return 0;
    for(int i = index; i < list -> size; ++i){
        *(list -> array + i - 1) = *(list -> array + i);
    }
    list -> size--;
    return 1;
}

E * getList(ArrayList list, int index){
    if(index < 1 || index > list -> size) return NULL;
    return list -> array + index - 1;
}

int findList(ArrayList list, E element){
    for (int i = 0; i < list -> size; ++i) {
        if(*(list -> array + i) == element) return i + 1;
    }
    return -1;
}
/**
 * ��ӡ���Ա�
 * @param list
 */
void printList(struct List list){
    for (int i = 0; i < list.size; ++i) {
        printf("%d ", list.array[i]);
    }
    printf("size = %d, capacity = %d", list.size, list.capacity);
    printf("\n");
}


int main(){
    struct List list;
    if(initList(&list) == -1){
        printf("��ʼ��ʧ��");
    } else {
        for (int i = 0; i < 30; ++i) {
            if(!insertList(&list, i, i + 1)){
                printf("����ʧ��");
            }
        }
        printList(list);
        deleteList(&list, 2);
        printList(list);
        printf("%p", getList(&list,3));
    }
    return 0;
}

