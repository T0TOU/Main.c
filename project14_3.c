#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("��������>:");
	char passworld[20] = { 0 };
	scanf("%s", &passworld);
	int ch = 0;
	printf("ȷ���𣿣�Y/N��>:");
	while ((ch = getchar()) != '\n');//getchar�Ƕ�ȡ�洢�������е�/n�����������û����������
	int a = getchar();
	if (a == 'Y')
		printf("ȷ�ϳɹ�\n");
	else
		printf("ȷ��ʧ��\n");
	printf("%d\n", '\n');//��\n������ַ���ASKIIֵ��10��
	int bh = 0;
	while ((bh = getchar()) != EOF)
		if (bh < '0'|| bh >'9')   //bh<'0'��bh>'9'�ǽ��������ֵС�ڻ����ASKII���ж�Ӧ��'0'��'9'ʱ����if��䣻
			continue;
		else
			putchar(bh);
	return 0;
}