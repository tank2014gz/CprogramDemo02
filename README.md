# CprogramDemo02
  C文件编译的四个步骤
1. 预处理 
   gcc -E main.c -o main.i
2. 编译 
   gcc -S main.i -o main.s
3. 汇编 
    gcc -c main.s -o mian.o
4. 链接
    gcc main.o -o main.a   or gcc -main.o -o main.exe
