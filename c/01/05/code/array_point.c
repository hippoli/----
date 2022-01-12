//求二维数组的鞍点(行最大,列最小,可能不存在)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int main()
{
    srand(time(NULL));
    // int array_int[5][5] = {0};
    int array_int[5][5] = {9,1,5,8,7,0,5,2,7,0,3,6,5,8,6,8,4,7,9,5,0,8,1,8,8};
    int num = 0; 
    int  flag = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            // array_int[i][j] = rand()%10;
            printf("%d\t",array_int[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            flag = 1;
            for (int z = 0; z < 5; z++)
            {
                if (array_int[i][j] < array_int[i][z])
                {
                    flag = 0;
                }
            }
            if (flag == 0)
            {
                continue;
            }
            for (int z = 0; z < 5; z++)
            {
                if (array_int[i][j] > array_int[z][j])
                {
                    flag = 0;
                }
            }
            if (flag == 0)
            {
                continue;
            }
            num++;
            printf("第%d个鞍数在array_int[%d][%d]\n",num,i,j);
        }
        
    }
    if (num == 0)
    {
        printf("没有鞍数");
    }
    
    return 0;
}