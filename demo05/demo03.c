//
// Created by 于立焱 on 2020/1/1.
//

#include <stdio.h>
#include <stdlib.h>
/**
 * 字符串长度计算
 * @return
 */

int strLength(char *str){
    int len=0;
    while (*(str+(++len)));
    return len;

}

int main() {
    char str[10];

   printf("str len=%d",strLength(str));


}