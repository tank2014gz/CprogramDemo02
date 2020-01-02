//
// Created by 于立焱 on 2020/1/1.
//

#include <stdio.h>
//指针数组和数组指针的区别
//指针数组和数组指针中分别存放的是什么
//数组指针里面存放的是指针，指针数组存放的是数组
//指针数组和数组指针的遍历
//指针数组和数组指针的数据修改


int main() {

    int *p[] = {};//[]的优先级比*高，所以先将这个语句分块[]代表是一个数组，int * 代表是一个指针，在语法上来解释数组里面存放指针 称为 指针数组


    int (*p1)[];//()的优先级比[] 高，所以先看（*p1）指针类型 []代表是一个数组 数组指针


    //指针数组，指针数组：数组里面存放的是指针
    char *color[] = {"red", "green", "blue"};
    int i = 0;
    char *temp = NULL;
    for (i = 0; i < 3; i++) {
//        printf("color[%d]=%p\n",i,color[i]);
//        printf("& color[%d]=%p\n",i,&color[i]);
//        printf("color[%d] =%s\n", i, color[i]);
        temp = color[i];
        printf("1 temp=%s\n", temp);
        printf("2 temp=%p\n", temp);
        printf("3 temp=%p\n", &temp);
        printf("3 temp size=%d\n", sizeof(temp));
    }


    //数组指针    数组指针整个就是一个指针
    char col[6] = { "yellow"};
    char col2[12] = { "yellow1"};
    char col3[12] = { "yellow2"};
    char col4[12] = { "yellow3"};
    char(*col1)[6] = {col,col2,col3,col4};
    printf("*col1 size=%d\n", sizeof(col1));

    int j = 0;
    for (j = 0; j < 6; ++j) {
        printf("col1[%d]=%s\n", j, col1[j]);
        printf("col1[%d]  size=%d\n", j, sizeof(col1[j]));
    }

}