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
	outtextxy(600,400,"˧");//out text xy
	RGB(109, 247, 253);
	mciSendString("open ������Ԫǰ.mp3", NULL, 0, NULL);//-------mdi------Media(ý�壩Control�����ƣ� Interface���ӿڣ�sendstring�������ַ�����
	mciSendString(L"play ������Ԫǰ.mp3", NULL, 0, NULL);
	settextcolor(RGB(109, 247, 253));// set���� text���� color��ɫ
	settextstyle(123,0,"�����п�");// �������� style(���)
	outtextxy(700, 460, "��");
	//settextxy();//�������� xy����
	IMAGE bking;
	loadimage(&bking, "OIP-C.jpg");
	putimage(0, 0, &bking);
	getchar();
	return 0;
}