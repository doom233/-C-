//
// Created by Administrator on 2025/3/11.
//
/**
* 奇偶判断器
*/

#include <stdio.h>


int main(){
    int origin;
    char buffer[200];
    printf("请输入一个整数：");
    while(1){
        if(scanf("%d", &origin) == 1){
            break;
        } else {
            printf("请重新输入:");
            scanf("%s", buffer);
        }
    }
    printf("%d是一个%s数", origin, (origin & 1) ? "奇" : "偶");//与运算判断奇偶性速度更快
    return 0;
}