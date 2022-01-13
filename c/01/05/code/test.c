#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a[4][4] = {0};
    int i, j;
    srand(time(NULL));
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            a[i][j] = rand() % 10;
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}