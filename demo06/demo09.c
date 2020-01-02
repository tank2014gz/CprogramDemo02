//
// Created by 于立焱 on 2020/1/1.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * 控制台输入然后写入文件
 * @return
 */
int main() {
    FILE *fw = fopen("./test/i.txt", "w");
    if(fw){
        while (1){
            char buf[100]={0};
            scanf("%s",buf);
            if(strcmp(buf,"exit")==0){
                break;
            }
            fputs(buf,fw);
            fflush(fw);
        }
        fclose(fw);
        fw=NULL;
    }

}
