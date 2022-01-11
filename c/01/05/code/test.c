#include<stdio.h>
int main(){
    char c = 250;
    unsigned char d;
    char f;
    d = c + 249;
    f = c + 249;
    printf("%d",d);
    printf("%u",d);
    printf("%d\n",f);
    printf("%u",f);
    return 0;
}