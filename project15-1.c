#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "acc.h"
void max(int x, int y)  //int x, int y, 这些是形参--（形式参数），一般情况下不存在
{                       //因为只有该函数被调用后，才会给这两个参数分配内存单元
	if (x > y)          //调用完该函数后，形参 会自动销毁
		printf("Max = %d\n", x);
	if (x <= y)
		printf("Max = %d\n", y);
}
void exchange(int*  pa, int*  pb)
{
	int z = 0;         //这里是使用指针做为函数的输入值，因为：要对a和b的内容进行互换，要使用他们的地址进行互换
	z = *pa;           //若使用普通int变量，则int x 和 int y 拥有各自的地址，改变x和y无法改变所对应的a和b
	*pa = *pb;         //【简单来说：形参就是实参的一封临时拷贝】;对形参的修改是不会改变实参的
	*pb = z;	       //int* pa 是指针变量的写法   *pa 是解引用操作符
}
void Pnum(int x)
{
	int i = 0;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			printf("%d ", x);
		}
	}
}
void year(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
	{
		printf(" %4d ", x);
	}
}            //arr[]本质上是一个指针
int D_find(int arr[], int y, int sz)//这里的arr[]传递进来的是数组num1的首元素的地址
{
	int left = 0;
	int right = sz - 1;
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > y)
			right = mid - 1;
		else if (arr[mid] < y)
			left = mid + 1;
		else
		{
			return mid;
			break;
		}
	}
	if (left > right)
		return -1;
}
void clAdd(int* pcl)
{
	(*pcl)++;
}
int main()
{
	int a = 14;
	int b = 23;
	max(a, b);         //这里输入的a,b是实参--实际参数
	exchange(&a, &b);//&a，&b,也都是实参------只要该参数有一个固定值的，都是实参
	printf("a=%d b=%d\n", a, b);
	int i = 0;
	for (i = 3; i <= 100; i += 2)
	{
		Pnum(i);
	}
	printf("\n");
	for (i = 1000; i <= 2030; i++)
	{
		year(i);
	}
	printf("\n");
	int  num1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int c = 0; 
	scanf("%d", &c);

	int sz = sizeof(num1) / sizeof(num1[0]);
	int ret = D_find(num1, c, sz); //数组传参，传的不是一整个数组，而是数组中第一个元素的地址
	if (ret == -1)
		printf("NO\n");
	else
		printf("num1[%d] = %d\n", ret, c);
	int cl = 0;
	for (i = 0; i < 15; i++)
	{
		clAdd(&cl);
		printf("%d\n", cl);
	}
	printf("%d\n", printf("%d", printf("%d", 43)));//printf 函数 返回的是 打印在屏幕上字符的个数 --链式访问 
	int e = 0;
	int l = 0;
	scanf("%d%d", &e, &l);               //加法（add）；减法（sub）；乘法（mul）；除法（div）；
	printf("%d", acc(e, l));
	return 0;
}