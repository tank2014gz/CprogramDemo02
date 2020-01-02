//
// Created by 于立焱 on 2020/1/1.
//

#include <stdio.h>

/**
 * 指针与二维数组
 * @return
 */
int main() {
    int array[7] = {1, 2, 3, 4, 5, 6, 7};
    int array1[5] = {0};

    int array2[4][3] = {
            {1,  2,  3},//首地址
            {4,  5,  6},
            {7,  8,  9},
            {10, 11, 12}
    };

    int (*ptr_a)[3] = array2;//表示数组类型的指针
    printf("(ptr_a==== %d\n", sizeof(ptr_a));
    printf("array2 size=%d\n", sizeof(array2));
//下标 array2[i][j]   ptr_a[i][j]
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < (sizeof(array2[i]) / sizeof(int)); ++j) {
            printf("array2[%d][%d]=%d, ", i, j, array2[i][j]);
        }
        printf("\n");
    }

    printf("=================================\n");
//指针方式访问  指针偏移  *(*(ptr_a+i)+j)
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < sizeof(array2[i]) / sizeof(int); ++j) {
            printf("*(*(ptr_a+%d)+%d)=%d, ", i, j, (*(ptr_a[i]) + j));
        }
        printf("\n");
    }
    printf("===================================\n");
//下标和指针偏移  *((ptr_a[i])+j)   (*ptr_a[i])[j]

    printf("=====================================\n");


    printf("=================作业1===========================\n");
    //二维数组定义
    int a_array[4][3] = {
            {1,    2,    3,},
            {10,   20,   30},
            {100,  200,  300},
            {1000, 2000, 3000}};

    int (*a1)[3] = a_array;//表示数组类型的指针，它可以看成一个具有四个一维数组指针
    //每个元素又是一个包含了3个元素的一维数组 a[0] a[1] a[2]  表示第i行的首地址 i=1，2，3，4
    //a[i],*(a+i)  a+i 都表示第i行的第0个元素的地址
    //a[i]+j *(a+i)+j  &a[0][0]+3*i+j  (a1+i)+j 都是第i行第j列元素地址

    printf("a_array            =%p,%d\n", a_array, **a_array);
    printf("&a_array           =%p,%d\n", a_array, a_array[0][0]);
    printf("a_array[0]         =%p,%d\n", &a_array[0], *a_array[0]);
    printf("a_array[0][0]      =%p,%d\n", &a_array[0][0], a_array[0][0]);

    printf("a1                 =%p,%d\n", a1, **a1);
    printf("a1[0]              =%p,%d\n", a1, *a1[0]);

    //第二行第一列中数据获取
    printf("&a_array[2][0]     =%p,%d\n", &a_array[2][0], a_array[2][0]);
    printf("&a1[2][0]          =%p,%d\n", &a1[2][0], a1[2][0]);
    //二维数组越界会向下一行查询
    printf("&a1[1][5]          =%p,%d\n", &a1[1][7], a1[1][7]);

    //指针法查询数据
    printf("*(a1+2)+1          =%p,%d\n", *(a1 + 2) + 1, **(a1 + 2) + 1);
    printf("*(a_array+2)+1     =%p,%d\n", *(a_array + 2) + 1, **(a_array + 2) + 1);
    //下标指针混合法
    printf("a_array[3]+1          =%p,%d\n", a_array[3] + 1, *(a_array[3] + 1));
    printf("a1[3]+1               =%p,%d\n", a1[3] + 1, *(a1[3] + 1));
    //

    printf("a_array[0][0]+2*3 +1  =%p,%d\n", (&a_array[0][0] + 2 * 3 + 1), *(&a_array[0][0] + 2 * 3 + 1));
    printf("a1[0][0]+2*3+1        =%p,%d\n", (&a1[0][0] + 2 * 3 + 1), *(&a1[0][0] + 2 * 3 + 1));
    printf("a1[0]2*3+1            =%p,%d\n", (a1[0] + 2 * 3 + 1), *(a1[0] + 2 * 3 + 1));


}