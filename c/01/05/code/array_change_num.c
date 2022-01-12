//把输入的十进制以16进制输出
#include<stdio.h>
#define N 16 
int main()
{
    int num_10 = 0;
    int num_16 = 0;
    int array_num = 0;
    int array[20] = {0};
    char array_char[] = {"0123456789ABCDEF"};
    printf("请输入一个数:\n");
    scanf("%d",&num_10);
    while (num_10 != 0)
    {
        if (num_10 < 16)
        {
            array[array_num] = num_10;
            break;
        }
        array[array_num] = num_10%16;
        printf("%d\n",array[array_num]);
        num_10 = num_10 / 16;
        array_num++;
    }
    printf("16进制为:\n");
    // printf("%d\n",array_num);
    for (int i = array_num; i >= 0; i--)
    {
        printf("%c",array_char[array[i]]);
    }
    
    
    return 0;
}