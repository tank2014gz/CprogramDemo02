//
// Created by 于立焱 on 2019/12/31.
//
#include <stdio.h>
#include <stdlib.h>

/**
 * 指针与一维数组基本操作
 *
 * @return
 */
int main() {
    //数组的名，就是数组的起始地址，也是第一个元素的地址，本身就是一个常量指针
    int array[] = {1, 2, 3, 4, 5};
    printf("array %p\n", array);
    int *ptr_array = array;
    printf("array %p\n", ptr_array);
//    ptr_array = ptr_array ;
    printf("array %p\n", &array);
    printf("array %p\n", &array[0]);
    printf("-----------------------------\n");
    //第二个元素的地址
    printf("array %p\n", &array[1]);
    printf("array %p\n", array + 1);
    printf("array %p\n", &array[0] + 1);

    printf("---------------------------\n");
    array[2] = 100;
    printf("array[2]=%d\n", array[2]);
    *array = 10;
    printf("array[0]=%d\n", *array);
    array[5] = 500;
    printf("array[5]=%d\n", array[5]);

//    array[10] = 500;
//    printf("array[10]=%d", array[10]);   //异常
//
//    array[7] = 500;
//    printf("array[7]=%d", array[7]);  //越界异常

    array[3] = 1100;
    printf("array[3]=%d\n", array[3]);

    printf("*(array+3)%d\n", *(array + 3));

    printf("-----------------------------------\n");
    //array+3, &array[3] ptr_array+3,&ptr_array[3]  代表了同一个地址
    printf("array+3 %p\n", array + 3);
    printf("&(array[3])%p\n", &(array[3]));
    printf("ptr_array+3%p\n", ptr_array + 3);
    printf("&ptr_array[3]%p\n", &ptr_array[3]);

    printf("-----------------------------------\n");
    printf("array+3 %d\n", *(array + 3));
    printf("&(array[3])%d\n", *&(array[3]));
    printf("ptr_array+3%d\n", *(ptr_array + 3));
    printf("&ptr_array[3]%d\n",* &ptr_array[3]);

}
