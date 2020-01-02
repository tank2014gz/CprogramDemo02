//
// Created by 于立焱 on 2020/1/1.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * 字符串==字符数组
 * @return
 */
int main() {

    printf("hello world!!\n");
    //折行符
    char c[] = "就度假酒店就jjjjjj" \
    "jdjjdjd"\
    "维护的好的滑动";
    printf("%s\n", c);

    //字符数组
    char a[10] = {'1', '2', '4'};
    printf("%s\n", a);

    int i[10] = {1, 3, 7, 5};

    char str[10] = {'h', 'e', 'l', 'l', 'o', '\0'};//特殊d的字符数组
    printf("%s\n", str);
    char str1[11] = "hello";//'/0' 可以省略
    printf("str1=%s\n", str1);

    char *str2 = "jhello99999999999";

    printf("str2=%s", str2);


    printf("sizeof   length=====================\n");
    printf("str length=%d\n", sizeof(str));
    printf("str1 length=%d\n", sizeof(str1));
    printf("str2 length=%d\n", sizeof(str2));

    printf("接收控制台输入字符串===================\n");

//    char *str4 = NULL;   //?
    char str4[10];
//    scanf("%s",str4);  //可以无限的接收字符串，超过10个字符在一些平台上回报错 数组下标越界  空格会识别为换行，空格后面的字符不再打印
    //scanf()
//    gets(str4);//可以接受无限的字符，超过10个字符仍然可以打印，但是回报一些警告信息，  空格不会被识别为换行，空格后面字符会继续打印出来
//    fgets(str4,10,stdin);   //超过的字符会不会再接受
//    fgets(str4, 10, stdin);   //超过的字符会不会再接受

//    printf("str4=%s\n", str4);


    //字符数组赋值
    printf("字符数组赋值\n");

    char char1[10] = "123";
//    for (int j = 0; j < 10; ++j) {
//        char1[j] = 'j';
//    }
//    strcpy(char1,"189338838");
    printf("char1==%s\n",char1);

    //获取字符串长度

    printf("char1 length=%d",strlen(char1));



}