//
// Created by 于立焱 on 2019/12/31.
//
#include <stdio.h>
#include <stdlib.h>

/**
 * 空指针
 * 指针的类型转换
 * @return
 */
int main() {
    //初始化指针一定要设置为NULL或者附一个初值
    //指针使用需要注意两点：1. 初始化时初值为NULL或者赋初值（防止空指针）  2.free之后要设置为NULL（防止悬空指针）
    int *ptr_i = NULL;
    *ptr_i;//指针为NULL之后，这种操作是不被允许的

    //为什么指针的类型都是8字节长度，还要给指针指定数据类型？
    int n;
    char c;
    short s;
    int *ptr_n = &n;
    char *ptr_c = &c;
    short *ptr_s = &s;
    //把一个整形的指针，转换成一个通用指针，地址不会改变，但是类型信息丢失了
    void *ptr_void = ptr_n;
    printf("ptr_n=%p\n", ptr_n);
    //讲一个通用指针转换成int类型的指针
    int *ptr_n1 = (int *) ptr_void;
    printf("ptr_void =%p\n", ptr_void);
    double *ptr_double = (double *) ptr_n;  //语法正确，存在语义错误，编译器无法执行
    printf("ptr_double Address =%p\n", ptr_double);
    printf("ptr_double value =%x\n", ptr_double);


    return -1;
}
