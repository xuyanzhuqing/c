#include<stdio.h>
#include<stdlib.h>

// https://www.runoob.com/cprogramming/c-file-io.html

int main(){
    FILE *fp;
    char ch;

    //判断文件是否成功打开
    if( (fp=fopen("./a.txt","a+")) == NULL ){
      puts("Fail to open file!");
      exit(0);
    }

    printf("Input a string:\n");
    //每次从键盘读取一个字符并写入文件
    while ( (ch=getchar()) != '\n' ){
        fputc(ch,fp);
    }
    fclose(fp);
    return 0;
}