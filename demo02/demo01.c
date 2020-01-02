//
// Created by 于立焱 on 2019/12/31.
//
#include <stdio.h>

/**
 * 指针 demo01
 * @return
 */
int main() {

    //指针最重要的核心

    int x = 10;

    int *i_ptr = &x;
    printf("x的值 %d\n", x);
    printf("x地址 %p\n", &x);

    printf("i_ptr值 %p\n", i_ptr);  //指针存储的是两一个变量的地址，
    printf("i_prt地址 %p\n", &i_ptr);//指针本身是有自己的地址的。


    int b = i_ptr;

    printf("b的值 %d\n", b);
    printf("b的值 %p\n", b);
    printf("b 的地址 %p\n", &b);


    //指针的大小都是4

    printf("int 指针的大小都是 %d\n", sizeof(int *));
    printf("long 指针的大小 %d\n", sizeof(long *));


    //void* void指针是一种特殊的指针，所有的其他类型的指针都可以赋值给它

    printf("void* 指针的大小 %d\n", sizeof(void *));
    void *ptr_a = i_ptr;

    printf("ptr_a 的值 %d\n", ptr_a);
    printf("ptr_a 存储的指针值 %p\n", ptr_a);
    printf("ptr_a 指针地址 %p\n", &ptr_a);

    long c = 100;
    long *ptr_c = &c;

    ptr_a = ptr_c;
    printf("-------------------------\n");//指针的重新赋值，指针本身的地址是不变的，指针存储的值是可以更改的
    printf("ptr_a=%p\n",ptr_a);
    printf("ptr_a 指针地址%p\n",&ptr_a);

    return 0;

}