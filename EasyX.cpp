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
	outtextxy(600,400,"帅");//out text xy
	RGB(109, 247, 253);
	mciSendString("open 爱在西元前.mp3", NULL, 0, NULL);//-------mdi------Media(媒体）Control（控制） Interface（接口）sendstring（发送字符串）
	mciSendString(L"play 爱在西元前.mp3", NULL, 0, NULL);
	settextcolor(RGB(109, 247, 253));// set设置 text文字 color颜色
	settextstyle(123,0,"华文行楷");// 设置文字 style(风格)
	outtextxy(700, 460, "哥");
	//settextxy();//设置文字 xy坐标
	IMAGE bking;
	loadimage(&bking, "OIP-C.jpg");
	putimage(0, 0, &bking);
	getchar();
	return 0;
}