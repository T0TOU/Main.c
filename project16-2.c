#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bouble(int* num, int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (num[j] > num[j + 1])
			{
				int tem = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tem;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
}
int main()
{
	int i = 0;
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	bouble(arr, sizeof(arr) / sizeof(arr[0]));
	for (i = 0; i <= (sizeof(arr) / sizeof(arr[0]))-1; i++)//在sizeof（数组名）数组名不是首元素地址，是表示的|一整个数组|；计算一整个数组的大小单位byte字节
	{
		printf("arr[%d]=%d ", i, arr[i]);
	}
	printf("\n   arr=%p\narr[0]=%p\n", arr, &arr[0]);//这里arr的地址 就是arr中首字母的地址
	printf("%d\n", *arr);//arr是arr[0]的地址，用 指针解引用操作符 可以求出来数值
	printf("%p\n", &arr);//&数组名，这里是一整个|数组的地址|
	return 0; 
}