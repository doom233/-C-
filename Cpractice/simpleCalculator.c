//
// Created by Administrator on 2025/3/11.
//
#include "stdio.h"

int main(){
    double num1, num2, result;
    char operator;
    int inputStatus;

    //��֤�Ƿ���ȷ����
    do{
        printf("���׼�����");
        printf("��������ʽ��ʵ����4 + 5 ����");
        inputStatus = scanf("%lf %c %lf", &num1, &operator, &num2);
        if(inputStatus != 3){
            printf("�����ʽ�����밴����ȷ��ʽ��������\n");
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
                printf("�����������");
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            printf("�������������");
            return 1;
    }

    printf("%.2lf %c %.2lf = %.2lf", num1, operator, num2, result);
}