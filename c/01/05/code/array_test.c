// 定义一个整型数组，其中可以存储70个整数
// 往数组中随机的写入100以内的值
// 最后，输出查看结果。
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int array_int[70];
    srand(time(NULL));
    for (int num = 0; num <= 70; num++)
    {
        array_int[num] = rand() % 100;
        printf("%d\n", array_int[num]);
    }

    return 0;
}
