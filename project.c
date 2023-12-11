#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	const int num = 8;  //const--常属性（固定一个变量为固定值）const修饰的常变量
	printf("%d\n",num);
	int arr[2] = { 0 };    //"2"所在的位置是必须用常量的，而const  num无法运行，所以num不完全是常量,
	                       //const int num是一个固定了的变量.
	return 0;
}