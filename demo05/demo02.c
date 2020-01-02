//
// Created by 于立焱 on 2020/1/1.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * 字符串拼接
 * @return
 */


int strCat(char *s1, char *s2) {
    while (*s1) s1++;
    while (*s1++ = *s2++);

}


int main() {

    char s1[] = "123";//这种方式的数据是存储在栈里面的，这种数据即可以读；也可以写数据
    char s2[] = "abc";

    strCat(s1, s2);
    printf("s1=%s\n", s1);
    //当需要对字符串进行读写操作的时候采用字符数组的申请方式来初始化字符串

    char *str = "1234";  //str是在栈上分配的，但是"hello字符串是分配在常量区的,常量区的数据可以读取，但是不能修改

    char str2[10];
    scanf("%s", str2);
    printf("%s \n", str2);
    char *str3 = (char *) malloc((sizeof(char) * 15));

    scanf("%s", str3);
    printf("str3=%s\n", str3);

    char* str6=(char *)malloc(30);
    char str5[] = "hello";
    strcpy(str6, str5);
    printf("%s\n", str6);

    char str7[10]="zhongguoren";
    strncpy(str7,"12345678",3);
    printf("%s\n",str7);
}




