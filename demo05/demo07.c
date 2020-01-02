//
// Created by 于立焱 on 2020/1/1.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 共用体
 * @return
 */

union  Data{
    int i;
    float  f;
    char str[20];
}data={100,0.9f,"cccccc"};
int main() {
    data.f=100.99f;
    data.i=100;
//    strcpy(data.str,"999");

    printf("data.i=%d,data.f=%d,data.str=%s",data.i,data.f,data.str);
}
