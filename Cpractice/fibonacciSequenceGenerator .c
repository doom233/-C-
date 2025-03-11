//
// Created by Administrator on 2025/3/11.
//
#include "stdio.h"
#include "stdlib.h"

int main(){
    printf("斐波那契数列生成器\n");
    int sequence = 0, inputStatus = 0;
    printf("请输入生成多少个：");
    do{
        inputStatus = scanf("%d", &sequence);
        if(inputStatus != 1){
            printf("请输入一个数字:");
            while(getchar() != '\n');
        }
    }while(inputStatus != 1);

    int * result = malloc(sizeof(int) * sequence);

    for (int i = 0; i < sequence; ++i) {
        if(i == 0 || i == 1) {
            result[i] = 1;
            continue;
        }
        result[i] = result[i-1] + result[i-2];
    }

    for (int i = 0; i < sequence; ++i) {
        printf("%d ", result[i]);
    }
}
