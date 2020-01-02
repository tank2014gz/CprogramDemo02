//
// Created by 于立焱 on 2020/1/1.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * 文件拷贝
 * @return
 */
int copy();

int main() {
    int result = copy();
    printf("result=%d", result);
}

int copy() {
    //打开文件
    FILE *pr = fopen("./test/a.txt", "r");
    if (pr == NULL) {
        return -1;
    }

    FILE *pw = fopen("./test/b.txt", "w");
    if (pw == NULL) return -2;
    if (pw) {
        while (1) {
            char r = fgetc(pr);
            if (r == EOF) {
                break;
            }
            fputc(r, pw);
        }
        fclose(pw);
        pw = NULL;
    }

    fclose(pr);
    pr = NULL;
    return 0;
}


