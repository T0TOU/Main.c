#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>// std -->: standard-->:��׼ ��׼���������
#include <easyx.h>
#include <mmsystem.h>//mm-��ý�� system-ϵͳ
#pragma comment(lib,"winmm.lib") //�������ļ�pragma comment
#include <Windows.h>
int main()
{
	int a = 0;
	initgraph(1200,800); //init��ʼ�� graphͼ�ν��棻�����Ǵ����������ô�С
	cleardevice();//ˢ�´���
	BLUE;
	outtextxy(600,400,L"˧");//out text xy
	RGB(109, 247, 253);
	mciSendString(L"open ������Ԫǰ.mp3", NULL, 0, NULL);//-------mdi------Media(ý�壩Control�����ƣ� Interface���ӿڣ�sendstring�������ַ�����
	mciSendString(L"play ������Ԫǰ.mp3", NULL, 0, NULL);
	getchar();
	return 0;
}