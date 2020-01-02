//
// Created by 于立焱 on 2019/12/31.
//
#include <stdio.h>
#include <stdlib.h>

int swap(int a, int b);
int swap1(int *a,int* b);
int main() {
    int a = 2, b = 5;
    swap(a, b);
    printf("第一次交换后  a=%d,b=%d\n", a, b);
    swap1(&a,&b);
    printf("第二次交换后  a=%d,b=%d\n", a, b);
}

int swap1(int *a,int* b){
    printf("交换前  a=%d,b=%d\n", a, b);
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("交换后  a=%d,b=%d\n", a, b);

}


int swap(int a, int b) {
    printf("交换前  a=%d,b=%d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("交换后  a=%d,b=%d\n", a, b);
    return -1;
}