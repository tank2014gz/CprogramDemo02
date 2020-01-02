//
// Created by 于立焱 on 2020/1/1.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 文件操作
 * @return
 */
/**
 * 只允许读文件
 * @return
 */
//int fileRead() {
//    //r 只允许读
//    FILE *file = fopen("./test/demo.txt", "r");
//    if (file) {
//        printf("success\n");
//        fclose(file);
//        free(file);
//        file = NULL;
//    } else {
//        printf("fail\n");
//    }
//};


int fileWrite() {
    FILE *file = fopen("./test/a.txt", "w");
    if (file) {
        printf("success\n");
        fclose(file);
        file = NULL;
    } else {
        printf("fail\n");
    }
    return 0;
}

/**
 * 字符读写
 * @return
 */
int fileReadContext() {
    FILE *file = fopen("./test/a.txt", "r");
    if (file) {
        char c = fgetc(file);
        printf("c=%c\n", c);

        while (1) {
            char c1 = fgetc(file);
            printf("%c", c1);
            if (c1 == EOF) {
                break;
            }
        }
        printf("\n");

        fclose(file);
        file = NULL;
    } else {

    }
    return 0;
}

/**
 * w 方式写数据会把之前的数据覆盖掉
 * @return
 */
int writFileContext() {
    FILE *file = fopen("./test/a.txt", "w");
    if (file) {
        int i=1;
        while (i) {
            fputc('9', file);
            if(i>15){
                i=-1;
            }
            i++;
        }
        fputc('a', file);
        fclose(file);
        file = NULL;
    }

    return 0;
}

int main() {
    writFileContext();
//    fileReadContext();
//    fileRead();

//    fileWrite();

}
