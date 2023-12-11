#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcde";	
	char arr2[] = { 'a','b','c',0};
	char arr3[] = "hello,bit";
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	printf("%d\n", strlen(arr1)); //strlen---string(一串）length(n，长，长度；long的变形加th）
	printf("%d\n", strlen(arr2)); //strlen 计算一串字符长度的
	printf("%d\n", strlen(arr3));
	printf("c;\test\32\test.c\n");// \t--水平制表符键盘上tab键	转意字符
	printf("c:\\test\\32\\test.c\n"); //通过在转意义的字符前加"/"使其与斜杠一起变为普通词
	printf("(are you ok??)\n"); //老版本的编译器会有三字母词 例：“？？+（”=[ 在问号前加 “/"结决问题，/？的由来
	printf("%c\n",'\''); //用\可以隔开相和成为功能的字符，%c打印字符，%d打印整形  
	printf("%d\n", strlen("c:\test\32\test.c"));// \32作为八进制代表的那个十进制数，作为ASCII码值，对应的字符
	printf("%d\n", strlen("c:\\test\\32\\test.c"));//32 --> 011010 -->26--->做为ASKII码值代表的字符
	printf("%c\n", '\141');        //  \ddd ddd表示1~3个八进制数  \xdd dd表示2个十六进制数字
	return 0;
}
