//
// Created by 于立焱 on 2019/12/31.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * 指针数组
 * @return
 */
int main() {
//malloc 在堆上分配内存
    char *str;
    //最初分配内存
    str = (char *) malloc(sizeof(char) * 15);

//str=calloc(15, sizeof(char));
//    memset(str, 0, 15);
    printf("Memory Allocated at: %x\n", str);
    int i = 0;
    for (i = 0; i < 15; i++) {
        printf("%3d", str[i]);
    }

    printf("\n");
    strcpy(str, "c study");

    printf("1 String =%s,Address=%p\n", str, str);

    //重新分配内存
    str = (char *) realloc(str, sizeof(char) * 50);

    strcat(str, ":http://ke.qq.com/course/list/");

    printf("2 String =%s Address=%p\n", str, str);

    free(str);
    printf("3 String=%s,Address=%p\n", str, str);


    str = NULL;
    printf("4 String =%s Address=%p", str, str);


    return -1;
}
