//二维数组行列互换
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int array_int[5][5] = {0};
    int num = 0; 
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array_int[i][j] = rand()%20;
            printf("%d\t",array_int[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");
    for(int i = 0 ; i < 5; i++){
        for (int j = 0; j < i; j++)
        {
            num = array_int[i][j];
            array_int[i][j] = array_int[j][i];
            array_int[j][i] = num;
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t",array_int[i][j]);
        }
        printf("\n");
    }
    return 0;
}