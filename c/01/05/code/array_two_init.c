// 计算二维数组的最大值，最小值
// 求3x4数组中大于等于平均值的所有元素的和，并统计满足条件的元素个数
// 求一个4x4数组左下三角元素的和(包括主对角线)
// 求5x5数组中主对角线元素的和及副对角线元素的积
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int array_34[3][4] = {0};
    int array_44[4][4] = {0};
    int array_55[5][5] = {0};
    int max = 0;
    int min = 100;
    double age = 0;
    int add_num_34 = 0;
    int add_num_44 = 0;
    int add_num_55 = 0;
    int mul_num_55 = 1;
    srand(time(NULL));
    //最大值最小值
    for (int  i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 4; j++)
        {
            array_34[i][j] = rand() % 20;
            printf("%d\t",array_34[i][j]);
            if (max < array_34[i][j])
            {
                max = array_34[i][j];
            }
            if (min > array_34[i][j])
            {   
                min = array_34[i][j];
            }
            age += array_34[i][j];

        }
        printf("\n");
    }
    //大于等于平均数的和
    age = age / 12.0;
    for (int  i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 4; j++)
        {
            // array_34[i][j] = rand() % 20;
            // printf("%d\t",array_34[i][j]);
            // age = age / 12;
            if (array_34[i][j] >= age)
            {
                add_num_34 += array_34[i][j];
            }
        }
        printf("\n");
    }
    //求一个4x4数组左下三角元素的和(包括主对角线)
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
             array_44[i][j] = rand() % 20;
        }
        
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            add_num_44 += array_44[i][j];
        }
        
    }
    // 求5x5数组中主对角线元素的和及副对角线元素的积3
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
             array_55[i][j] = rand() % 40;
             if(i == j)
             {
                 add_num_55 += array_55[i][j];
             }
             if(i + j == 4)
             {
                mul_num_55 *= array_55[i][j];
             }
        }
    }
    
    printf("数组的最大值为%d的\n",max);
    printf("数组的最小值为%d的\n",min);
    printf("大于等于数组平均数的和为%d\n",add_num_34);
    printf("4x4数组左下三角元素的和为%d\n",add_num_44);
    printf("5x5数组中主对角线元素的和为%d\n及副对角线元素的积为%d\n",add_num_55,mul_num_55);
    return 0;
}