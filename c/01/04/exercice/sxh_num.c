#include<stdio.h>
#include<math.h>
int main(){
    int i;
    printf("请输入一位三位数：\n");
    scanf("%d",&i);
    int j;
    j = pow((i/100),3) + pow(i / 10 % 10,3) + pow(i%10,3);
    if (i == j)
    {
        printf("这是一个水仙花数");
    }else{
        printf("这不是一个水仙花数");
    }
    return 0;
}