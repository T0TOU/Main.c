#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	while (1)
	{
		static int a = 1;
		printf("%d\n", a);
		a++;
		//continue;//continue是继续的意思，在循环中是从continue这返回重新开始循环；终止本次循环中continue后面得代码；
		if (a > 10)
			break;//break是立刻跳出循环，switch case 语句中break也是跳出case；
	}
	int ch = getchar();//getchar 获取键盘上的一个字符；
	putchar(ch);//putchar(ch) 和printf("%c\n",ch)等价，-----putchar输出一个键盘上的字符；

	int i = 0;
	while ((i = getchar()) != EOF)//Ctrl+Z i会获取到EOF,循环就回停止；
		putchar(i);				  //EOF--End Of File(文件结束标志）它的值是“-1”;
	return 0;
}