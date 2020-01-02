//
// Created by 于立焱 on 2020/1/1.
//

#include <stdio.h>

//指针的指针
//指针的指针有什么作用：查找指针所指向地址所指向的值
/**
 *
 * @param src  const 表示我传入的参数不允许方法对数组进行改变
 * @param ch  要查找的字符
 * @param ret 返回的结果  二级指针是为了将查找结果返回回来
 * @return
 */
int find(const char *src, char ch, char **ret);

int find1(const char *src, char ch, char *ret);

//改变数组中值
/**
 * 如果参数中定义为const 数组是不能改变数组里面的值的
 * @param array
 * @return
 */
int changeArrayValue(int array[]);

int changeArrayValueWithLength(int array[], int arraySize);

int main() {
    int i = 100;
    int *ptr_i = &i;

    printf("i =%d\n", i);
    printf("i address=%p\n", &i);
    printf("*ptr_i value=%d\n", *ptr_i);
    printf("ptr_i address=%p\n", ptr_i);
    printf("*ptr_i address=%p\n", *ptr_i);
    printf("ptr_i self address=%p\n", &ptr_i);
    int **ptr_j = &ptr_i;  //指针的指针

    printf("==================================\n");

    printf("i=%d\n", i);
    printf("*ptr_i=%d\n", *ptr_i);
    printf("**ptr_i=%d\n", **ptr_j);


    printf("===================================\n");


    printf("ptr_j address=%p\n", ptr_j);
    printf("ptr_j address=%p\n", *ptr_j);
    printf("ptr_j self address=%p\n", &ptr_j);

    char cArray[] = "bei jing huan ying ni";
    char *ret = NULL;
    if (find(cArray, 'n', &ret)) {
        printf("ret=%s\n", ret);
    }
//参数中传递的数组传递的是数组的指针，无法获取数组的长度
    ret = NULL;
    if (find1(cArray, 'n', ret)) {
        printf("ret=%s\n", ret);
    }


    int iArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("改变前----------------------------\n");
    for (int j = 0; j < (sizeof(iArray) / sizeof(int)); ++j) {
        printf("iArray[%d]=%d\n", j, iArray[j]);
    }
    printf("\n");
    changeArrayValue(iArray);
    printf("改变后---------------------------\n");
    for (int j = 0; j < (sizeof(iArray) / sizeof(int)); ++j) {
        printf("iArray[%d]=%d\n", j, iArray[j]);
    }
    printf("\n");

    printf("=============================带数组长度的函数==============================\n");
    int jArray[6] = {23, 25};
    printf("改变之前========================\n");
    for (int j = 0; j < (sizeof(jArray) / sizeof(int)); ++j) {
        printf("jArray[%d]=%d\n", j, jArray[j]);
    }
    changeArrayValueWithLength(jArray, (sizeof(jArray) / sizeof(int)));
    printf("改变之后========================\n");
    for (int j = 0; j < (sizeof(jArray) / sizeof(int)); ++j) {
        printf("jArray[%d]=%d\n", j, jArray[j]);
    }
}


int find(const char *src, char ch, char **ret) {
    char *index = (char *) src;
    while (*index) {
        if (*index == ch) {
            *ret = index;
            return 1;
        }
        index++;
    }
    return 0;
}

int find1(const char *src, char ch, char *ret) {
    char *index = (char *) src;
    while (*index) {
        if (*index == ch) {
            ret = index;
            return 1;
        }
        index++;
    }
    return 0;
}

int changeArrayValue(int array[]) {
    printf("array size=%d\n", sizeof(array));
    array[0] = 100;
    array[9] = 777;
}

int changeArrayValueWithLength(int array[], int size) {
    printf("=====================================\n");
    printf("array size=%d\n", sizeof(array));
    printf("改变前：========================================\n");
    for (int i = 0; i < size; ++i) {
        printf("array[%d] =%d\n", i, array[i]);
    }
    array[0] = 100;
    array[9] = 777;
    array[4]=666;
    printf("改变后：====================================\n");
    for (int i = 0; i < size; ++i) {
        printf("array[%d] =%d\n", i, array[i]);
    }

}