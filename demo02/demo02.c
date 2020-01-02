//
// Created by 于立焱 on 2019/12/31.
//

#include <stdio.h>
#include <stdlib.h>

int test1();

int test2();

int main() {
    test2();
//    test1();
}

/**
 * 指针是分配在栈上的
 * @return
 */
int test1() {
    int i = 400;
    int j = 500;

    int *ptr_i = &i;
    printf("%p\n", &i);
    printf("%p\n", &j);
    printf("%p\n ", &ptr_i);

    return 1;
}

int test2() {
    int i = 400;
    int j = 500;

    int *ptr_i = &i;

    printf("分配前地址 %p\n", ptr_i);
    printf("分配前变量内存地址 %p\n", &ptr_i);

    //使用malloc函数在堆上分配一块内存给ptr_i
    ptr_i = (int *) malloc(sizeof(int));  //使用malloc函数在堆上分配一块内存地址

    printf("分配后地址 %p\n", ptr_i);  //这里是指针所指向变量的内存地址，可以指向任何的地址
    printf("分配后 变量的内存地址 %p\n", &ptr_i);

    int c;
    int *ptr_b = &c;
    ptr_b = (int *) malloc(sizeof(int));
    printf("ptr_b=%d\n", ptr_b);
    printf("ptr_b=%p\n", ptr_b);
    printf("ptr_b=%p\n", &ptr_b);
    free(ptr_i);//未释放的指针称为悬空指针，跟野指针一样危险，必须避免，
    ptr_i = NULL;//0地址指针一般不能被访问
    //
    printf("ptr_i=%p\n", ptr_i);
    ptr_i = malloc(sizeof(int));
    printf("-----ptr_i=%p\n", ptr_i);
//malloc(size_t)  在堆上分配一块内存地址给一个指针变量
//calloc(size_t,size_t)  先初始化内存地址，然后重新分配一块内存地址。  malloc为指针变量分配内存地址必须先进行初始化
//realloc(void *,size_t) 重新给一个变量重新分配一块大的内存区域
//free(void *)  将内存变量分配的内存地址释放掉



//总结
//&运算符，是用于取一个对象的地址
//*是一个间接寻址符，用于访问指针所指向的地址的值
//int * ptr  用于定义一个指针
//int b=*ptr； 用于访问指针所指向的值
//&与*是一组互逆运算
}