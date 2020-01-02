//
// Created by 于立焱 on 2019/11/10.
//

#include <stdio.h>
#include <stdlib.h>

void test01();

void test02();

void test03();
void test04();

int main() {

//    test01();
//    test02();
    test04();
}

void test01() {
    int i = 100;
    int *ptr_i = &i;
    printf("i的指针地址 %p\n", &i);
    printf("i的指针地址 %p\n", ptr_i);
    printf("i的指针地址 %p\n", &ptr_i);
    printf("i的指针地址int ptr大小 %lu\n", sizeof(i));
    printf("i的指针地址 ptr大小 %lu\n", sizeof(ptr_i));
    printf("i的指针地址char ptr大小 %lu\n", sizeof(char));
    printf("i的指针地址指针 ptr大小 %lu\n", sizeof(&ptr_i));
    printf("i的指针地址long long ptr大小 %lu\n", sizeof(long long));
    printf("i的指针地址 long ptr大小 %lu\n", sizeof(long));
    long l = 1000;
    printf("l 大小%lu\n", sizeof(l));
    printf("l 地址 大小%lu\n", sizeof(&l));
    printf("void 地址 大小%lu\n", sizeof(void *));
    printf("void 地址 大小%lu\n", sizeof(char *));
}

void test02() {
    int i = 100;
    int j = 1900;
    int *ptr_i = &i;
    int *ptr_j = &j;
    printf("i的指针地址 %p\n", &i);
    printf("j的指针地址 %p\n", &j);
    printf("ptr_i的指针地址 %p\n", &ptr_i);
    printf("ptr_j的指针地址 %p\n", &ptr_j);

    printf("===============================");
    ptr_i = (int *) malloc(sizeof(int));
    printf("ptr_i的自己的指针地址 %p\n", &ptr_i);
    printf("ptr_i的指针地址 %p\n", ptr_i);

    free(ptr_i);
    ptr_i = NULL;//释放之后的指针，不做处理的指针称为 悬空指针，野指针 是危险的指针，必须避免
    //=NULL之后设置为0，不能访问这种地址
    printf("free --ptr_i的指针地址 %p\n", ptr_i);
    printf("free ptr_i的自己的指针地址 %p\n", &ptr_i);

    //总结
    //1.&运算符，用于取一个对象的地址
    //2。 *是一个间接寻址符，用于访问指针所指向的地址的值
    //3。 int *ptr_i,  定义指针
    //4。 int b=*p  用于访问指针指向的地址的值
    //5。 & 和*是一对互逆运算

    int var = 222, *ptr;
    ptr = &var;
    int temp = *ptr;
    printf(" var%d\n", var);
    printf(" ptr %d\n", *ptr);
    printf(" temp %d\n", temp);
}

void swap(int x, int y) {
    printf("交换前的值 x=%d y=%d\n", x, y);
    int temp = x;
    x = y;
    y = temp;
    printf("交换后的值 x=%d y=%d\n", x, y);
}

void test03() {
    int a = 1, b = 4;
    printf("交换前的值 a=%d b=%d\n", a, b);
    swap(a, b);
    printf("交换后的值 a=%d b=%d\n", a, b);

}



void swap1(int *x, int *y) {
    printf("交换前的值 x=%d y=%d\n", x, y);
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("交换后的值 x=%d y=%d\n", x, y);
}

void test04() {
    int a = 1, b = 4;
    printf("交换前的值 a=%d b=%d\n", a, b);
    swap1(&a, &b);
    printf("交换后的值 a=%d b=%d\n", a, b);

}
