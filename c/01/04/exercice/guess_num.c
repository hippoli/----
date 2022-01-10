#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand((unsigned)time(NULL));
    int a = rand()%100;
    int totail = 0;
    while(1)
    {
        int num = 0;
        printf("请输入一个100以内的整数:\n");
        scanf("%d",&num);
        if (num == a)
        {
            printf("恭喜你猜对了\n");
            totail++;
            break;            
        }
        if (num > a)
        {
            printf("太大\n");
            totail++;
        }
        if (num < a)
        {
            printf("太小\n");   
            totail++;         
        }
    }
    printf("你一共猜了%d次\n",totail);
    return 0;
}