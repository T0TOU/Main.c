#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*#define max 100  */            //用#define定义的是符号不需要加“=”！！
#define MAX(x,y) (x>y?x:y)		 //用宏的方法
#define ADD(x,y) (x+y)

int max(int x, int y)            //用
{                                //函
	if (x > y)                   //数
		return x;                //方
	else                         //法
		return y;
}

int  test()
{
	static int a = 0;             //static修饰  '局部变量'  ，让其再次进入时不会变为一开始所定义的变量；
	a++;                         //局部变量的生命周期变长，出了他的作用域，不会销毁变量；
	printf("a = %d\n", a);

}
int main()
{
	typedef unsigned int u_int;//typedef类型定义--可以将一个组合加在一起写出的专有名词；
	u_int num1 = 1;           //u_int和unsigned int 是等价的；
	unsigned int num2 = 1;
	u_int i= 0;
	while (i < 5)
	{
		test();
		i++;
	}
	//extern t_kip;              //前一页加了static,所以这里声明就没有用了；
	//printf("%d\n", t_kip);
	extern int Add();
	printf("%d\n", Add(4, 5));	//函数和全局变类似，在函数前加上了stasic作用域也只有函数所在原文件；
								//static   '修饰函数'   ，改变了函数的链接属性
	                            //外部链接属性--->内部链接属性；
	int Max = max(3, 1);
	printf("%d\n", Max);
	int mAx = MAX(1, 4);
	printf("%d\n", mAx);
	int add = ADD(9, 1);
	printf("%d\n", add);
	return 0;
}