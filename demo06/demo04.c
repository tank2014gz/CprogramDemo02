//
// Created by 于立焱 on 2020/1/1.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *
 * @return
 */

int addHex() {
    FILE *fr = fopen("./test/a.txt", "r");
    if (fr == NULL) {
        printf("打开a文件失败");
        return -1;
    }
    FILE *fw = fopen("./test/d.txt", "w");
    if (fw) {
        while (1) {
            char c = fgetc(fr);
            if (c == EOF) {
                break;
            }
            c++;
            fputc(c, fw);
        }
        fclose(fw);
        fw = NULL;
    } else {
        printf("运行失败");
    }

    fclose(fr);
    fr = NULL;
    return 0;
}


int exportHex() {
    FILE *fr = fopen("./test/d.txt", "r");
    if (fr == NULL)return -1;
    FILE *fw = fopen("./test/e.txt", "w");
    if (fw) {
        while (1) {
            char c = fgetc(fr);
            if (c == EOF) {
                break;
            }
            c--;
            fputc(c, fw);
        }
        fclose(fw);
        fw = NULL;
    }
    fclose(fr);
    fr = NULL;
    return 0;


}

int main() {

    int x = addHex();
    if (x == 0) {
        int y = exportHex();
        if (y == 0) {
            printf("执行结果结束");
        }
    }


    return 0;
}
