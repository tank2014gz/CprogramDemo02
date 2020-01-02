//
// Created by 于立焱 on 2019/12/31.
//
#include <stdio.h>
#include <stdlib.h>

/**
 * 数组指针与指针数组
 * @return
 */
int main() {
    //指针数据与数组指针的区别
    //运算符 * [] () 三者的优先级 从低到高
    //int (*ptr_array)[]  数组指针
    //int *ptr_array[5]  指针数组

    int array[] = {1, 2, 3, 4, 5};

    int *ptr_array = array;

    printf("array=%p\n", array);
    printf("&array=%p\n", &array);
    printf("--------------------------------\n");

    printf("array+1=%p\n", array + 1);
    printf("&array+1=%p\n", &array + 1);


    int array1[] = {1, 2, 3, 4, 5};
//int *ptr_array=&array  //语法错误，把&array当成一个int类型的指针是错误的它实际上是一个数组指针
//    int(*ptr_array1)[] = &array1;//数组指针
//    int(*ptr_array1)[4]=&array1;//类型不同
    int (*ptr_array1)[5] = &array1;

    for (int i = 0; i < 5; i++) {
        printf("array[%d]=%d\n",i,array1[i]);
    }
    int *p=NULL;
    for (p=array1;p<array1+5;p++){
        printf("p=%p,*p=%d\n",p,*p);
    }



    return -1;
}
