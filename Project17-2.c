#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getsize(int* arr1, char* arr2)
{
	printf("sizeof(int* arr1) = %d\n", sizeof(arr1));//sizeof的单位是字节
	printf("sizeof(int* arr2) = %d\n", sizeof(arr2));//大小是一个指针的大小，是64位平台8*8个字节，所以是8
}
int getmax(int x, int y)
{
	return(x > y) ? x : y;//三目操作符，X>Y 成立吗？ 成立 x 不成立 y
}
int underzero(int x,char y)
{
	if (x > 0)
	{
		x -= 5;
		if (x <= 0)
		{
			printf("%c = %d\n", y, x);
		}
		else
			printf("m%c = %d\n", y, x);
	}

	return x;
}
int main()
{
	int arr1[10] = { 0 };
	char arr2[10] = { 0 };
	printf("sizeof(arr1) = %d\n",sizeof(arr1));
	printf("sizeof(arr2) = %d\n", sizeof(arr2));
	getsize(arr1, arr2);
	printf("%d\n", getmax(1, 5));
	struct student
	{
		char name[20];
		int age;			//结构体定义，数组不能在结构体内部初始化
		char ID[20];
	};
	struct student s1 = { "黎明",23,"320121100981211" };
	printf("name: %s age: %d ID: %s\n", s1.name, s1.age, s1.ID);
	struct student* LiMing = &s1;
	printf("name: %s age: %d ID: %s\n", (*LiMing).name, (*LiMing).age, (*LiMing).ID);
	printf("name: %s age: %d ID: %s\n", LiMing->name, LiMing->age, LiMing->ID);
	int a = 0; int a2 = 0; int b = 2; int c = 3; int d = 4;
	int E = a++ && b++ && ++d && c++;
	int F = ++a2 || b++ || c++ || ++d;
	printf("按位与（并且） = %d %d%d%d%d\n", E,a,b,c,d);//按位或只要一个为0，后面都不计算，a++是先赋值再自增
	printf("按位或（或者） = %d %d%d%d%d\n", F,a,b,c,d);//按位与只要有一个1，后面都不计算，++a是先自增后赋值
	int ma = 0;
	int mb = 0;
	printf("ma:>");
	scanf("%d", &ma);
	ma = underzero(ma,'a');
	"\n";
	while (ma > 0)
	{
		printf("ma:>");
		scanf("%d",&ma);
		ma = underzero(ma,'a');
		"\n";
	}
	while (printf("mb:>"), scanf("%d", &mb), mb = underzero(mb, 'b'), "\n", mb > 0)//逗号表达式，省略一些重复的步骤
	{

	}
	return 0;
}