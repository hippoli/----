//从键盘输入两数，按从小到大的顺序输出
#include<stdio.h>
int main(){
    int i = 0;
    int j = 0;
    printf("请输入一个数：\n");
    scanf("%d",&i);
    printf("请再输入一个数：\n");
    scanf("%d",&j);
    if(i>j){
        printf("%d",j);
        printf("\t");
        printf("%d",i);
    }else{
        printf("%d",i);
        printf("/t");
        printf("%d",j);
    }
    return 0 ;
}