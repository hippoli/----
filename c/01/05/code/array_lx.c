// 1.输入学生的学号及语文、数学、英语成绩，输出学生各科成绩及平均成绩。
// 2.生成一个随机的一维数组，然后从键盘输入一个值，判断该值是否在数组中。
// 3.将已按升序排好的字符串a和b按升序归并到字符串c中，并输出。
// 4.判断一个字符串是不是回文字符串(回文字符串就是正读反读都一样的字符串)
// 5.对一个字符串进行加密和解密，加密方式是将字符串每个字符加上它在字符串中的位置和一个偏移值5例: 
// "mrsoft"的第一个字符'm'在字符串中的位置为0，那么它对应的密文是 'm'+0+5
// 6.将整数m插入到升序一维数组a中去，使得插入后的数组a仍然有序。


//1.
// #include<stdio.h>
// int main(){
//     long stu = 0;
//     float language = 0;
//     float math = 0;
//     float english = 0;
//     printf("请输入学生的学号:\n");
//     scanf("%ld",&stu);
//     printf("请输入学生语文成绩\n");
//     scanf("%f",&language);
//     printf("请输入学生英语成绩\n");
//     scanf("%f",&english);
//     printf("请输入学生数学成绩\n");
//     scanf("%f",&math);
//     printf("学生学号为:%ld,学生语文成绩为:%f,学生英语成绩为:%f,学生数学成绩为:%f,平均成绩为:%f",stu,language,english,math,(language+english+math)/3);
//     return 0;
// }

// 2.生成一个随机的一维数组，然后从键盘输入一个值，判断该值是否在数组中。
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int main()
// {
//     srand(time(NULL));
//     int array[20];
//     int num;
//     for (int i = 0; i < 20; i++)
//     {
//         array[i] = rand()%50;
//         printf("%d\t",array[i]);
//     }
//     printf("\n");
//     printf("请输入一个数:");
//     scanf("%d",&num);
//     for (int i = 0; i < 20; i++)
//     {
//         if (num == array[i])
//         {
//             printf("数组中有相同的数！！！！！！");
//             break;
//         }
//     }
//     return 0;
// }

// 3.将已按升序排好的字符串a和b按升序归并到字符串c中，并输出。
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 20
int main(){
    srand(time(NULL));
    int array_a[N] = {0};
    int array_b[N] = {0};
    for (int i = 0; i < N; i++)
    {
        array_a[i] = rand()%50;
        array_b[i] = rand()%50;
    }
    
    return 0;

}