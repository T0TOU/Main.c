#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int max = 0;
	scanf("%d %d", &a, &b);
	max = (a > b ? a : b);       //  ��exp1 ? exp2 : exp3��  exp1������? (����Ϊ�棬������Ϊ�٣�
	printf("max=%d\n", max);	//  ���'exp1'������'exp2'��ֵ��max�� ��'exp1'��������exp3'��ֵ��max
	                           //   ��Ŀ������ ��������������
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
//		int b = a++;//����++����ʹ�ã���++���Ƚ�a��ֵ��b��Ȼ��a�Լ���++��
//		int c = ++a;//ǰ��++�����ȼӺ�ֵ����a++������,������12��
//		int d = --z;
//		int e = z--;
//		printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//		int hi = 3.14; //warning C4244 : ����ʼ����: �ӡ�double��ת������int�������ܶ�ʧ����
//		int hi = (int)3.14;// ��(���ͣ���ǿ��ת�������õ�
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