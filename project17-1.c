#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double a = 5.0 / 2.0;//����С���˷���������һ������С�����һλ����������2.0�Ͳ�����2��
	printf("%lf\n", a);//��%lf��ӡС������double����С��������
	int b = -1;
	b = b >> 1;
	//�������ƣ��ұ߶�������߲�����λ�������ǡ�1�������ǡ�0����0000000000000000000000000000000000010000----32������int4���ֽڣ�һ���ֽ�8������λ��ͨ����
	//�߼����ƣ��ұ߶�������߲�0
	printf("%d\n", b);
	int c = 5;
	int d = 3;
	d = d & c;
	//5 == 101;3 == 011;
	//00000000000000000000000000000101
	//00000000000000000000000000000011
	//��λ���������Ķ�����λ��ֻҪ��0����ô����0
	//c&d == 00000000000000000000000000000001
	printf("%d\n", d);
	int e = 0;
	int f = 1;
	f = e | f;
	//ֻҪ��1����1��
	printf("%d\n", f);
	int g = 5;
	int h = 3;
	h = g ^ h;
	printf("%d\n", h);
	//��Ӧ����������λ����ͬ����������0������ͬ ��Ϊ�����1�� �����0000000000000000000000000000000
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