#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 10;
	int* c = &a;       //*是用来保存数据的地址的---指针变量
	printf("%p\n", &a);//“%p”是用来打印数据所占内存的二进制位的(内存的地址）
	printf("%p\n", c);
	*c = 34;           //解引用操作符
	printf("%d\n", a); //‘*c’是找到地址c中的数据进行编译
	char i = 'b';
	char* pc = &i;
	*pc = 'a';
	printf("%c\n", i);
	char  arr[] = {'1','2','3','4',0};
	char  arr2[] = { "1,2,3,4" };
	printf("%s\n", arr);
	printf("%c\n", arr[0]);
	printf("%s\n", arr2);
	printf("%d\n", sizeof(arr) / sizeof arr[0]);
	printf("sizeof(pc)=%d\n", sizeof pc);//sizeof pc是 8证明了内存存在了64位二进制位中就是64bit  = 64/8 = 8byte
	printf("%d\n", sizeof * pc);         //*pc和其地址所对应的i所指的是一个东西
	printf("%d\n", sizeof i);
	return 0;
}