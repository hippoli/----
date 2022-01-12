//逆序输出一维数组
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int main()
{
    srand(time(NULL));
    int array_co[N];
    for (int i = 0; i < N; i++)
    {
        array_co[i] = rand()%20;
        printf("%5d",array_co[i]);
    }
    printf("\n");
    for (int i = 0; i < N/2; i++)
    {
        int ls = array_co[i];
        array_co[i] = array_co[N-i-1];
        array_co[N-i-1] = ls;
    }
    for (int i = 0; i < N; i++)
    {
        printf("%5d",array_co[i]);
    }
    
    
    return 0;
}