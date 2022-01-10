#include <stdio.h>
#include <math.h>
int main()
{
    printf("所有的水仙花都在这了！\n");
    for (int a = 100; a < 999; a++)
    {
        if (a == pow(a / 100, 3) + pow(a / 10 % 10, 3) + pow(a % 10, 3))
        {
            printf("%d\n", a);
        }
    }
    return 0;
}