#include <stdio.h>

int main(){
    double celsius, fahrenheit;
    int i;
    printf("�¶�ת��\n");
    printf("������ת������(1:���϶�ת��Ϊ���϶ȣ�2�����϶�ת��Ϊ���϶�)��");
    scanf("%d", &i);

    while(i != 1 && i !=2){
        printf("��������ȷ��ת������(1����2):");
        scanf("%d", &i);
    }

    if(i == 1){
        printf("����������ת�����¶ȣ�");
        scanf("%lf", &fahrenheit);
        celsius = 5 * (fahrenheit -32) / 9;
        printf("%.2f C = %.2f F", celsius, fahrenheit);
    }

    if(i == 2){
        printf("����������ת�����¶ȣ�");
        scanf("%lf", &celsius);
        fahrenheit = 9 * celsius / 5 + 32;
        printf("%.2f F = %.2f C", fahrenheit, celsius);
    }

}