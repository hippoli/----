//从键盘中任意输出10个整型数据到数组a中,编程求出a中相邻两元素之和,存到数组b中,按每行三个元素输出
#include <stdio.h>
int main()
{
    int num = 0;
    int array_a[10] = {0};
    int array_b[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        printf("请输入十个数,当前为第%d个数",i);
        scanf("%d",&num);
        array_a[i] = num;
    }
    for (int i = 0; i < 9; i++)
    {
        array_b[i] = array_a[i] +array_a[i+1];
        printf("%d\t",array_b[i]);
        if ((i+1)%3 == 0)
        {
            printf("\n");
        }
    }
    
    return 0;
}
