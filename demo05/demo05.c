//
// Created by 于立焱 on 2020/1/1.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * 字符串数组
 * @return
 */
int main() {
    char str[4][6] = {"1234", "abcd", "hggk", "jjjj"};

    printf("str=%s =%d\n", str, sizeof(str));
    printf("char size=%d\n", sizeof(char *));
    printf("%d\n", (sizeof(str) / sizeof(char *)));
    for (int i = 0; i < (sizeof(str) / sizeof(char *)); i++) {
        printf("%s\n", str[i]);
    }

    char *str2[4] = {"aaa", "bbb", "ccc"};

    printf("%s,", str2[0]);
    printf("%s,", str2[1]);
    printf("%s", str2[2]);
//常量指针 ：指针指向的地址是可以改变的，指针所指向的地址的值是不能修改的
    str2[0] = "8888";//这个可以对数据进行赋值，因为这个地方是一个指针，重新给一个指向一个新的地址是可以行得通的
//    strcpy(*str2[0],"99999");
//    printf("str2[0]\n",str2[0]);
    printf("\n");

//    str[0]="3333";  str[0] 是一个一维数组的数组名，这个地址是一个常量，无法对一个常量重新赋值
//指针常量  指针所指向的地址是步能改变的，指针所指向地址是不能改变的
    strcpy(str[0], "bbbbb");
    printf("str[0]=%s\n", str[0]);

    //常量指针
    const char *p; //常量指针，指针的地址可以改变，但是指针所指向地址的值不能改变
    char const *pp;
    p = pp;//指针的指向可以发生改变。
    strcpy(p,"0000000000");//但是试图修改常量指针所指向的地址的值不能改变的
    //指针常量
    char *const *ppp;  //指向的地址不能改变，指向地址的值可以改变


}