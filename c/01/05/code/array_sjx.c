//输出4x4数组的下三角元素
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 4
#define LINE 4
int main(){
    srand(time(NULL));
    int array_sjx[ROW][LINE] = {0};
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < LINE; j++)
        {
            array_sjx[i][j] = rand()%10;
            printf("%d\t",array_sjx[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d\t",array_sjx[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}