//
// Created by 于立焱 on 2020/1/1.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * 读取文件中数据计算加法并返回结果写回文件
 * @return
 */

int cacl(int a, char b, int c) {
    switch (b) {
        case '+':
            return a + c;
        case '-':
            return a - c;
        case '*':
            return a * c;
        case '/':
            if (c == 0) {
                return -1;
            }
            return a / c;
    }
    return -1;
}

/**
 * 获取单行数据
 * @return
 */
int step1() {
    FILE *fr = fopen("./test/h.txt", "r");
    if (fr) {
        while (1) {


            char line[100] = {0};
            fgets(line, sizeof(line), fr);
            if (feof(fr)) {
                break;
            }
            int a = 0;
            int c = 0;
            char b = 0;
            sscanf(line, "%d%c%d=", &a, &b, &c);
            printf("%d%c%d=%d\n", a, b, c, cacl(a, b, c));
        }
    } else {
        printf("读取失败");
    }

    fclose(fr);
    fr = NULL;
    return 0;
}

int main() {
    FILE *fr = fopen("./test/h.txt", "r");
    char *line = calloc(100, sizeof(char));
    char *temp = line;
    int index = 0;
    if (fr) {

        while (1) {
            char buf[100] = {0};
            fgets(buf, sizeof(buf), fr);
            if (feof(fr)) {
                break;
            }
            int a = 0;
            int c = 0;
            char b = 0;

            sscanf(buf, "%d%c%d=", &a, &b, &c);
            sprintf(temp, "%d%c%d=%d\n", a, b, c, cacl(a, b, c));
            line = realloc(line, 100 * (index + 2));
            temp = line + (index + 1) * 100;
            index++;
        }


    } else {
        printf("读取失败\n");
    }
    printf("写入之前\n");
    fclose(fr);
    FILE *fw= fopen("./test/h.txt", "w");
    if(fw) {
        printf("打开写入文件\n");
        int i = 0;
        temp = line;
        for (i = 0; i < index; i++) {
            fputs(temp, fw);
            temp += 100;
        }
        free(temp);
        free(line);
    }
    printf("写入结束\n");
    fclose(fw);
    fr = NULL;


    return 0;
}
