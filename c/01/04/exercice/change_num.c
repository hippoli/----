//逆序输出一个三位数
#include <stdio.h>
int main()
{
    int num = 0;
    printf("请输入一个三位数:\n");
    scanf("%d", &num);
    int num_change = 0;
    num_change = num / 100 + num / 10 % 10 * 10 + num % 10 * 100;
    printf("%d", num_change);
    return 0;
}