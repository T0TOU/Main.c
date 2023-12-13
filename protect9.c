#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int max = 0;
	scanf("%d %d", &a, &b);
	max = (a > b ? a : b);       //  “exp1 ? exp2 : exp3”  exp1成立吗? (成立为真，不成立为假）
	printf("max=%d\n", max);	//  如果'exp1'成立则'exp2'赋值给max， 若'exp1'不成立则‘exp3'赋值给max
	                           //   三目操作符 （条件操作符）
	return 0;
}

//int main()
//{
//	int a = 0;
//	int b = 5;
//	int c = 0;
//	int d = 0;
//	c = a && b;
//	d = a || b;
//	printf("c=%d d=%d\n", c, d);
//	return 0;
//}
//int main()
//{
//		int a = 10;
//		int z = 10;
//		int b = a++;//后置++，先使用，再++（先将a赋值给b，然后a自己再++）
//		int c = ++a;//前置++则是先加厚赋值，（a++了两次,所以是12）
//		int d = --z;
//		int e = z--;
//		printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//		int hi = 3.14; //warning C4244 : “初始化”: 从“double”转换到“int”，可能丢失数据
//		int hi = (int)3.14;// “(类型）”强制转换类型用的
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr) / sizeof arr[0] );
//	return 0;
//}