//
// Created by 于立焱 on 2020/1/1.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * 参数控制加密解密
 * @return
 */
int add_or_export_Hex(const char *src, const char *out, const char  m) {
    FILE *fr = fopen(src, "r");
    printf("m =%d",m);
    if (fr == NULL) return -1;
    FILE *fw = fopen(out, "w");
    if (fw) {
        while (1) {
            char c = fgetc(fr);

            if (c == EOF) {
                break;
            }
            if (m == '0') {
                c++;
            } else {
                c--;
            }
            fputc(c,fw);
        }
        fclose(fw);
        fw = NULL;
    }
    fclose(fr);
    fr = NULL;
    return 0;
}


int main(int argc, char **argv) {

    if (argc < 4) {
        printf("缺少参数");
        return -1;
    }
    add_or_export_Hex(argv[1],argv[2],*argv[3]);
    return 0;

}
