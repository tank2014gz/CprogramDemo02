//
// Created by 于立焱 on 2020/1/1.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * 自己可以输入参数的 文件拷贝
 * @return
 */
int main(int argc, char **argv) {
//  printf("argc =%d\n",argc);
//  while (argv++){
//      printf("argv=%s\n",*argv);
//  }
    if (argc < 3) {
     return -1;
    }
    FILE * fr=fopen(argv[1],"r");
    if(fr==NULL) return -2;

    FILE * fw=fopen(argv[2],"w");

    if(fw){
        while (1){
            char c=fgetc(fr);
            if(c==EOF){
                break;
            }
            fputc(c,fw);
        }
        fclose(fw);
        fw=NULL;
    }else{
        fclose(fr);
        fr=NULL;
    }
    return 0;

}
