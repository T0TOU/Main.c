#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getsize(int* arr1, char* arr2)
{
	printf("sizeof(int* arr1) = %d\n", sizeof(arr1));//sizeof�ĵ�λ���ֽ�
	printf("sizeof(int* arr2) = %d\n", sizeof(arr2));//��С��һ��ָ��Ĵ�С����64λƽ̨8*8���ֽڣ�������8
}
int getmax(int x, int y)
{
	return(x > y) ? x : y;//��Ŀ��������X>Y ������ ���� x ������ y
}
int underzero(int x,char y)
{
	if (x > 0)
	{
		x -= 5;
		if (x <= 0)
		{
			printf("%c = %d\n", y, x);
		}
		else
			printf("m%c = %d\n", y, x);
	}

	return x;
}
int main()
{
	int arr1[10] = { 0 };
	char arr2[10] = { 0 };
	printf("sizeof(arr1) = %d\n",sizeof(arr1));
	printf("sizeof(arr2) = %d\n", sizeof(arr2));
	getsize(arr1, arr2);
	printf("%d\n", getmax(1, 5));
	struct student
	{
		char name[20];
		int age;			//�ṹ�嶨�壬���鲻���ڽṹ���ڲ���ʼ��
		char ID[20];
	};
	struct student s1 = { "����",23,"320121100981211" };
	printf("name: %s age: %d ID: %s\n", s1.name, s1.age, s1.ID);
	struct student* LiMing = &s1;
	printf("name: %s age: %d ID: %s\n", (*LiMing).name, (*LiMing).age, (*LiMing).ID);
	printf("name: %s age: %d ID: %s\n", LiMing->name, LiMing->age, LiMing->ID);
	int a = 0; int a2 = 0; int b = 2; int c = 3; int d = 4;
	int E = a++ && b++ && ++d && c++;
	int F = ++a2 || b++ || c++ || ++d;
	printf("��λ�루���ң� = %d %d%d%d%d\n", E,a,b,c,d);//��λ��ֻҪһ��Ϊ0�����涼�����㣬a++���ȸ�ֵ������
	printf("��λ�򣨻��ߣ� = %d %d%d%d%d\n", F,a,b,c,d);//��λ��ֻҪ��һ��1�����涼�����㣬++a����������ֵ
	int ma = 0;
	int mb = 0;
	printf("ma:>");
	scanf("%d", &ma);
	ma = underzero(ma,'a');
	"\n";
	while (ma > 0)
	{
		printf("ma:>");
		scanf("%d",&ma);
		ma = underzero(ma,'a');
		"\n";
	}
	while (printf("mb:>"), scanf("%d", &mb), mb = underzero(mb, 'b'), "\n", mb > 0)//���ű��ʽ��ʡ��һЩ�ظ��Ĳ���
	{

	}
	return 0;
}