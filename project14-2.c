#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	while (1)
	{
		static int a = 1;
		printf("%d\n", a);
		a++;
		//continue;//continue�Ǽ�������˼����ѭ�����Ǵ�continue�ⷵ�����¿�ʼѭ������ֹ����ѭ����continue����ô��룻
		if (a > 10)
			break;//break����������ѭ����switch case �����breakҲ������case��
	}
	int ch = getchar();//getchar ��ȡ�����ϵ�һ���ַ���
	putchar(ch);//putchar(ch) ��printf("%c\n",ch)�ȼۣ�-----putchar���һ�������ϵ��ַ���

	int i = 0;
	while ((i = getchar()) != EOF)//Ctrl+Z i���ȡ��EOF,ѭ���ͻ�ֹͣ��
		putchar(i);				  //EOF--End Of File(�ļ�������־������ֵ�ǡ�-1��;
	return 0;
}