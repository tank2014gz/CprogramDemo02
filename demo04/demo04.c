//
// Created by 于立焱 on 2020/1/1.
//

#include <stdio.h>

/**
 * 1. 函数指针
 * 用途：函数回调
 * @return
 */


void test(int n);

int test1(int n, char s);

int test2(int a, int b, int (*callback)(int, int));

int call(int a, int b);
int call2(int a,int b);

int main() {

//    void  *pTest(int);

    void (*p)(int);
    p = &test;
    p(100);

    int (*m)(int, char);
    m = &test1;
//    int result =
    int r = m(900, 'c');
    printf("%d\n", r);
    printf("result=%d\n", m(100, 'c'));

    printf("=================================\n");
    printf("888888=%d\n",test2(12, 14, call));
    printf("888888=%d\n",test2(12, 14, call2));
    printf("===================================\n");

}

void test(int n) {
    printf("test(%d)\n", n);
}

int test1(int n, char s) {
    printf("test1(%d,%c)\n", n, s);
    return 1;
}

int test2(int a, int b, int (*callback)(int, int)) {
    return (callback(a,b));
}

int call2(int a,int b){
    return a-b;
}

int call(int a, int b) {
    return a + b;
}