#define _CRT_SECURE_NO_WARNINGS
static int t_kip = 2023;//static 修饰   '全局变量'   改变的是它的作用域---让全局变量只能在自己所在的原文件内部使用；
                        //static 修饰局部变量改变的是它的生命周期；
 int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
