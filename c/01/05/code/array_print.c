//使用嵌套循环打印出
// $
// $$
// $$$
// $$$$
// $$$$$
#include<stdio.h>
int main()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("$");
        }
        printf("\n");
    }

    for (int i = 0; i < 6; i++)
    {
        int num = 70;
        for (int j = 0; j < i + 1; j++)
        {
            printf("%c",num);
            num--;
        }
        printf("\n");
        
    }
    
    
    return 0;
}