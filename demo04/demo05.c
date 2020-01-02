//
// Created by 于立焱 on 2020/1/1.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
//int *p //指针
//int *p1[n] //数组指针
//int (*p)[n] //指针数组
//int* p() //函数 返回值是 一个指针
//int (*p)() //指针函数
//int **p //指针的指针
//用指针的时候，明确知道内存的那块地方
//常量指针和指针常量
    char *const p;  //const 修饰的是指针，被称为指针常量 指针不能修改
    char const *pq;  //const 修饰的是类型，被称为常量指针
//    p=16;  错误
    pq = 100;//

    //栈上的内存free会报错
    int i = 10;
    int *ptr_i = &i;
    free(ptr_i);


}