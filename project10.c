#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*#define max 100  */            //��#define������Ƿ��Ų���Ҫ�ӡ�=������
#define MAX(x,y) (x>y?x:y)		 //�ú�ķ���
#define ADD(x,y) (x+y)

int max(int x, int y)            //��
{                                //��
	if (x > y)                   //��
		return x;                //��
	else                         //��
		return y;
}

int  test()
{
	static int a = 0;             //static����  '�ֲ�����'  �������ٴν���ʱ�����Ϊһ��ʼ������ı�����
	a++;                         //�ֲ��������������ڱ䳤���������������򣬲������ٱ�����
	printf("a = %d\n", a);

}
int main()
{
	typedef unsigned int u_int;//typedef���Ͷ���--���Խ�һ����ϼ���һ��д����ר�����ʣ�
	u_int num1 = 1;           //u_int��unsigned int �ǵȼ۵ģ�
	unsigned int num2 = 1;
	u_int i= 0;
	while (i < 5)
	{
		test();
		i++;
	}
	//extern t_kip;              //ǰһҳ����static,��������������û�����ˣ�
	//printf("%d\n", t_kip);
	extern int Add();
	printf("%d\n", Add(4, 5));	//������ȫ�ֱ����ƣ��ں���ǰ������stasic������Ҳֻ�к�������ԭ�ļ���
								//static   '���κ���'   ���ı��˺�������������
	                            //�ⲿ��������--->�ڲ��������ԣ�
	int Max = max(3, 1);
	printf("%d\n", Max);
	int mAx = MAX(1, 4);
	printf("%d\n", mAx);
	int add = ADD(9, 1);
	printf("%d\n", add);
	return 0;
}