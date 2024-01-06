#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>// std -->: standard-->:标准 标准的输入输出
#include <easyx.h>
#include <mmsystem.h>//mm-多媒体 system-系统
#pragma comment(lib,"winmm.lib") //包含库文件pragma comment
#include <Windows.h>
int main()
{
	int a = 0;
	initgraph(1200,800); //init初始化 graph图形界面；作用是创建窗口设置大小
	cleardevice();//刷新窗口
	BLUE;
	outtextxy(600,400,L"帅");//out text xy
	RGB(109, 247, 253);
	mciSendString(L"open 爱在西元前.mp3", NULL, 0, NULL);//-------mdi------Media(媒体）Control（控制） Interface（接口）sendstring（发送字符串）
	mciSendString(L"play 爱在西元前.mp3", NULL, 0, NULL);
	getchar();
	return 0;
}