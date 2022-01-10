#include<stdio.h>
int main(){
    int year = 2000;
    printf("请输入年份:\n");
    scanf("%d",&year);
    if(year%4 == 0 && year%100 != 0){
        printf("这是闰年\n");
    }
    if(year%400 == 0){
        printf("这是闰年\n");
    }
    return 0;
}
