//
// Created by Administrator on 2025/3/11.
//
/**
* ��ż�ж���
*/

#include <stdio.h>


int main(){
    int origin;
    char buffer[200];
    printf("������һ��������");
    while(1){
        if(scanf("%d", &origin) == 1){
            break;
        } else {
            printf("����������:");
            scanf("%s", buffer);
        }
    }
    printf("%d��һ��%s��", origin, (origin & 1) ? "��" : "ż");//�������ж���ż���ٶȸ���
    return 0;
}