//
// Created by 于立焱 on 2019/12/31.
//

#include <stdio.h>
#import "demo22.c"

#define  a1 "89898989"
#define  amethod(a,b) \
printf("a=%s,b=%s\n",a,b);
#define  b_method(a)\



extern_a = 10;


int main() {
    int a = 10;
    do {
        if (a == 5) {
            goto OUT;
        }
        printf(" a = %d\n", a);
        a--;
    } while (a > 0);
    OUT:
    printf("%d----------------------\n", extern_a);
    printf("%s\n", a1);
    amethod("12","14")



    return -1;

}





