// 定义一个int类型的数组，要计算该数组中的最小值，最大值 及 所有元素之和
// 定义一个double类型的数组，要得到其中最大值的下标
// 定义一个doulbe类型的数组，计算最大值与最小值的差值。
// 定义一个int类型的数组，并赋值，判断该数组中的元素是不是递增的
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int array_int[70];
    int array_pi[5] = {1, 2, 30, 4, 5};
    double array_double[70];
    double num_double = 0.0;
    int max_int = 0;
    double max_double = 0.0;
    int min_int = 100;
    double min_double = 100.0;
    int all_num_int = 0;
    int array_double_num = 0;
    srand(time(NULL));
    for (int num = 0; num < 70; num++)
    {
        array_int[num] = rand() % 100;
        array_double[num] = (rand() % 100) / 1.0;
        // printf("%d\n", array_int[num]);
        //int
        if (array_int[num] > max_int)
        {
            max_int = array_int[num];
        }
        if (array_int[num] < min_int)
        {
            min_int = array_int[num];
        }
        all_num_int += array_int[num];
        //double
        if (array_double[num] > max_double)
        {
            max_double = array_double[num];
            array_double_num = num;
        }
        if (array_double[num] < min_double)
        {
            min_double = array_double[num];
        }
        all_num_int += array_int[num];
    }
    //判断是否为递增
    for (int i = 0; i < 5; i++)
    {
        if (array_pi[i] <= array_pi[i + 1])
        {
            if (i == 4)
            {
                printf("这是一个递增数组！！！！！！！！！！\n");
            }
        }
        else
        {
            printf("这不是递增啊！！！！！！！！！！\n");
            break;
        }
    }
    printf("int最大数为:%d\tint最小值为:%d\tint元素之和为:%d\n", max_int, min_int, all_num_int);
    printf("double最大值的下标识%d\t最大值-最小值为%f\n", array_double_num, max_double - min_double);
    return 0;
}
