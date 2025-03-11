//
// Created by Administrator on 2025/3/11.
//
#include "stdio.h"

int main(){
    double num1, num2, result;
    char operator;
    int inputStatus;

    //验证是否正确输入
    do{
        printf("简易计算器");
        printf("请输入表达式（实例：4 + 5 ）：");
        inputStatus = scanf("%lf %c %lf", &num1, &operator, &num2);
        if(inputStatus != 3){
            printf("输入格式错误，请按照正确格式进行输入\n");
            while(getchar() != '\n');
        }
    }while(inputStatus != 3);


    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 == 0) {
                printf("除数输入错误");
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            printf("操作符输入错误");
            return 1;
    }

    printf("%.2lf %c %.2lf = %.2lf", num1, operator, num2, result);
}