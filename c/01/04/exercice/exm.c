//假设密码是123456
//从键盘输入密码，
//  如果输入错误，给出提示
//  输入正确，结束输入
#include <stdio.h>
int main()
{
    int a = 0;
    printf("请输入密码:\n");
    scanf("%d", &a);
    while (a != 123456)
    {
        printf("密码错误，请重新输入:\n");
        scanf("%d", &a);
    }
    printf("ok\n");
    return 0;
}