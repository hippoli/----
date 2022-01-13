#include<stdio.h>
#include<string.h>
int main()
{
    int A = 0,a = 0,num = 0;
    int o = 0;
    char array[] = {"ALJKSjlkasd46984AFA!!!!!!"};
    for (int i = 0; i < 26; i++)
    {
        if (array[i] >= 48 && array[i] <= 57)
        {
            A++;
        }
        else if (array[i] >= 65 && array[i] <= 90)
        {
            a++;
        }
        else if (array[i] >= 97 && array[i] <= 122)
        {
            num++;
        }else
        {
            o++;
        }
    }
    printf("大写:%d,小写:%d,数字:%d,其他:%d",A,a,num,o);
    return 0;
}