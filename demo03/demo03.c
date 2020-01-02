//
// Created by 于立焱 on 2019/12/31.
//
#include <stdio.h>
#include <stdlib.h>

/**
 * 指针的算术运算
 *
 * 对于不同类型变量，占用的内存空间是不一样的
 * 对于不同类型的指针类型，占用的空间是一样的
 *
 * 指针+1 是指加了一个单位的类型长度
 * 不同的类型指针加1的步长是不同的 与类型相关
 * 不同类型的指针类型有不同的算术运算才有了不同类型的指针变量
 * 指针的运算只支持加法和减法  + - ++ -- += -=
 * void 类型指针的单位步长是 1
 *
 * @return
 */
int main() {

    int i = 100;
    int *ptr_i = &i;
    printf("ptr=%p\n", ptr_i);
    printf("ptr+1=%p\n", ptr_i + 1);
    printf("ptr+2=%p\n", ptr_i + 2);

    printf("=============================\n");
    char c = 100;
    char *ptr_char = &c;
    printf("ptr_char =%p\n", ptr_char);
    printf("ptr_char+1 =%p\n", ptr_char + 1);
    printf("ptr_char+2 =%p\n", ptr_char);
    printf("=============================\n");

    short s = 10;
    short *ptr_short = &s;
    printf("ptr_short =%p\n", ptr_short);
    printf("ptr_short+1 =%p\n", ptr_short + 1);
    printf("ptr_short+2 =%p\n", ptr_short + 2);
    printf("=============================\n");


    long long ll=1000;
    long long * ptr_ll=&ll;

    printf("ptr_long_long =%p\n",ptr_ll);
    printf("ptr_long_long+1 =%p\n",ptr_ll+1);
    printf("ptr_long_long+2 =%p\n",ptr_ll+2);
    printf("ptr_long_long+3 =%p\n",ptr_ll+3);
    printf("ptr_long_long-1 =%p\n",ptr_ll-3);

    void *v=NULL;
    printf("void size=%d", sizeof(void));

    return -1;
}
