//
// Created by 于立焱 on 2020/1/1.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

/**
 *二进制文件读写程序
 * @return
 */

#define BLOCK_SIZE 64*1024

int main(int argc, char **argv) {
    if (argc < 3) return -1;

    FILE *fr = fopen(argv[1], "rb");
    if (fr == NULL) return -2;
    FILE *fw = fopen(argv[2], "wb");
    if (fw == NULL) return -3;
    struct stat st = {0};
    stat(argv[1], &st);
    int size = st.st_size;
    printf("file size=%d", size);
    if (size > BLOCK_SIZE) {
        return -4;
    }
    char *buf = calloc(1, size);
    unsigned int index;
    //获取文件大小
    while (!feof(fr)) {
        int res = fread(buf, 1, size, fr);
        fwrite(buf, 1, res, fw);
        index++;
    }

    free(buf);
    fclose(fw);
    fw = NULL;


    fclose(fr);
    fr = NULL;

    printf("index=%d", index);
    return 0;


}
