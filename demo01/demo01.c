//
// Created by 于立焱 on 2019/12/31.
//
#include <stdio.h>
extern  extern_a=9;

int main(){
    printf("int -size =%lu\n" , sizeof(int));
    printf("long -size =%lu\n", sizeof(long));
    printf("long long -size= %lu\n", sizeof(long long));
    printf("u_int8_t size= %lu\n", sizeof(u_int8_t) );
    printf("char -size= %lu\n", sizeof(char) );
    printf("float -size= %lu\n", sizeof(float) );
    printf("short -size= %lu\n", sizeof(short) );
    printf("double-size= %lu\n", sizeof(double) );
    printf("long double-size= %lu\n", sizeof(long double) );


    printf("-1 lu %lu\n", -1);
    printf("-1 u %u\n", -1);
    printf("-1 d %d\n", -1);
    printf("128 d %d\n", 128);
    printf("128 hhd %hhd\n", 128);
    printf("128 hd %hd\n", 128);
    printf("128 size %hu\n", 128);


    printf("1 %A\n",1);
    printf("2 %A\n",2);
    printf("1 %a\n",1);
    printf("2 %a\n",2);
    printf("r %c\n",'r');
}