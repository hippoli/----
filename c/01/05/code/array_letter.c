//创建一个包含26个元素的数组,并在其中存储26个小写字母,打印所有内容
#include <stdio.h>
int main()
{
    char array_char[26] = {0};
    int num = 97;
    for (int i = 0; i < 26; i++)
     {
         array_char[i] = num++;
     }
     for (int i = 0; i < 26; i++)
     {
         printf("%c",array_char[i]);
     }
     
     
    return 0;
}