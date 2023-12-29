#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	int arr[20] = { 1,2,3,4,5,6,7,8,9,10 };	
	int z = 0;
	//   初始化；判断；调整
	for (i = 0; i < 10; i++)//同while循环一样，判断是判断条件是否成立，成立为真‘1’,进入并开始循环，条件不成立为假为‘0’，退出循环；
	{          // <10十次循环；10个元素；10次打印；(前闭后开 写法）
		printf("%d ", arr[i]);//不建议在循环内部改变循环变量
	}
	for (;;)		//for循环的 初始化；判断；调整；都可以省略  判断恒为真；
	{	
		static z = 1;
		printf("%d 你好\n", z);
		z++;
	}
	return 0;
}