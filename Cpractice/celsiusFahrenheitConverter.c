#include <stdio.h>

int main(){
    double celsius, fahrenheit;
    int i;
    printf("温度转换\n");
    printf("请输入转换类型(1:华氏度转换为摄氏度，2：摄氏度转换为华氏度)：");
    scanf("%d", &i);

    while(i != 1 && i !=2){
        printf("请输入正确的转换类型(1或者2):");
        scanf("%d", &i);
    }

    if(i == 1){
        printf("请输入你想转换的温度：");
        scanf("%lf", &fahrenheit);
        celsius = 5 * (fahrenheit -32) / 9;
        printf("%.2f C = %.2f F", celsius, fahrenheit);
    }

    if(i == 2){
        printf("请输入你想转换的温度：");
        scanf("%lf", &celsius);
        fahrenheit = 9 * celsius / 5 + 32;
        printf("%.2f F = %.2f C", fahrenheit, celsius);
    }

}