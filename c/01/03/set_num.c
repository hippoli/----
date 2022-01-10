#include<stdio.h>
int main(){
    int i = 0x00000010;
    int j = 0;
    printf("请输入:\n");
    scanf("%d",&j);
    j = j | i;
    printf("%d",j);
    return 0;
}