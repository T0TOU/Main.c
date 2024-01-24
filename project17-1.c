#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double a = 5.0 / 2.0;//若是小数乘法，至少有一个数有小数点后一位的数，例如2.0就不能是2；
	printf("%lf\n", a);//用%lf打印小数，用double保存小数变量；
	int b = -1;
	b = b >> 1;
	//算术右移，右边丢弃，左边补符号位（负数是‘1’正数是‘0’）0000000000000000000000000000000000010000----32个数，int4个字节，一个字节8个比特位（通常）
	//逻辑右移，右边丢弃，左边补0
	printf("%d\n", b);
	int c = 5;
	int d = 3;
	d = d & c;
	//5 == 101;3 == 011;
	//00000000000000000000000000000101
	//00000000000000000000000000000011
	//按位与两个数的二进制位，只要有0，那么就是0
	//c&d == 00000000000000000000000000000001
	printf("%d\n", d);
	int e = 0;
	int f = 1;
	f = e | f;
	//只要有1就是1；
	printf("%d\n", f);
	int g = 5;
	int h = 3;
	h = g ^ h;
	printf("%d\n", h);
	//对应两个二进制位若相同，则假真输出0，若不同 则为真输出1； 结果：0000000000000000000000000000000
	int num = -1;
	scanf("%d", &num);
	int count = 32;
	int count2 = 0;
	int cunm = 0;
	int cnum = num;
	while (count)
	{
		if (num >= 0)
		{
			cunm = num % 2;
			count--;
			printf("%d (%d)\n", cunm, count + 1);
			if (num % 2 == 1)
				count2++;
			num = num / 2;
			if (count == 0)
				printf("In %d --'1'Have: %d\n", cnum, count2);
		}
		else if (num < 0)                                            
		{
			while (count)
			{
				if (num & 1 == 1)
					count2++;
				count--;
				printf("%d (%d)\n", num & 1, count + 1);
				num = num >> 1;
				if (count == 0)
					printf("In %d --'1'Have: %d\n", cnum, count2);
			}
		}
	}
	return 0;
}