#define _CRT_SECURE_NO_WARNINGS 1
#define SLEEP_TIME 1000
#include<stdio.h>
#include<easyx.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
#include<mmsystem.h>//Multi-Media Library
#pragma comment(lib,"Winmm.lib")//load Winmm.lib

//7  : 20��7  : 55 -> 26400 - 28500	���
//8  : 00��8  : 40 -> 28800 - 31200	��һ��	
//8  : 50��9  : 30 -> 31800 - 34200	�ڶ���
//9  : 40��10 : 20 -> 34800 - 37200	������
//10 : 40��11 : 20 -> 38400 - 40800	���Ľ�
//11 : 35��12 : 15 -> 41700 - 44100	�����
//13 : 00��14 : 00 -> 46800 - 50400	����
//14 : 20��15 : 00 -> 51600 - 54000	������
//15 : 15��15 : 55 -> 54900 - 57300	���߽�
//16 : 05��16 : 45 -> 57900 - 60300	�ڰ˽�
//19 : 00��20 : 25 -> 68400 - 73500	���޵�һ��
//20 : 40��22 : 00 -> 74400 - 79200	���޵ڶ���

int main(void)
{
	IMAGE SS;
	initgraph(750, 507, 0);
	loadimage(&SS, L"ss.jpg");
	/////////////////////////////////////////////////////////////////////////////////
	BeginBatchDraw();

	putimage(0, 0, &SS);

	EndBatchDraw();
	/////////////////////////////////////////////////////////////////////////////////
	mciSendString(L"open \"����ϿΣ��沮��Сҹ��.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"����¿Σ���߽�����.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"�ϿΣ��ʵ���.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"��һ���¿Σ����䣨��硶è��������Ƭ�Σ�.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"�ڶ����¿Σ���˹����Ƭ�Σ�.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"�������¿Σ��˶�Ա������.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"���Ľ��¿Σ�����������No.14.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"������¿Σ�����������No.9.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"�������¿Σ��������ʿ������.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"���߽��¿Σ�����������No.10.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"��ѧ¥�峡�����ֶ��ĳ��أ�Ƭ�Σ�.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"���ݿ�ʼ��������������������.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"�����𴲣�La Bamba.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"���޽���������������No.21.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"���޽�����������֮��.mp3\"", NULL, 0, 0);
	//open 

newday:
	while ((time(NULL) + 28800) % 86400 < 26400)
	{
		Sleep(SLEEP_TIME);
	}//mourning read in
	mciSendString(L"play \"����ϿΣ��沮��Сҹ��.mp3\"", NULL,NULL,NULL);
	if ((time(NULL) + 28800) % 86400 > 26700)
		mciSendString(L"stop \"����ϿΣ��沮��Сҹ��.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 28500)
	{
		Sleep(SLEEP_TIME);
	}//mourning read out
	mciSendString(L"play \"����¿Σ���߽�����.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 28700)
		mciSendString(L"stop \"����¿Σ���߽�����.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 28800)
	{
		Sleep(SLEEP_TIME);
	}//first in
	mciSendString(L"play \"�ϿΣ��ʵ���.mp3\"", NULL, NULL, NULL);

	if((time(NULL) + 28800) % 86400 > 29100)
		mciSendString(L"stop \"�ϿΣ��ʵ���.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 31200)
	{
		Sleep(SLEEP_TIME);
	}//first out
	mciSendString(L"play \"��һ���¿Σ����䣨��硶è��������Ƭ�Σ�.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 31500)
		mciSendString(L"stop \"��һ���¿Σ����䣨��硶è��������Ƭ�Σ�.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 31800)
	{
		Sleep(SLEEP_TIME);
	}//second in
	mciSendString(L"play \"�ϿΣ��ʵ���.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 32100)
		mciSendString(L"stop \"�ϿΣ��ʵ���.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 34200)
	{
		Sleep(SLEEP_TIME);
	}//second out
	mciSendString(L"play \"�ڶ����¿Σ���˹����Ƭ�Σ�.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 34500)
		mciSendString(L"stop \"�ڶ����¿Σ���˹����Ƭ�Σ�.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 34800)
	{
		Sleep(SLEEP_TIME);
	}//third in
	mciSendString(L"play \"�ϿΣ��ʵ���.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 35100)
		mciSendString(L"stop \"�ϿΣ��ʵ���.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 37200)
	{
		Sleep(SLEEP_TIME);
	}//third out
	mciSendString(L"play \"�������¿Σ��˶�Ա������.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 37500)
		mciSendString(L"stop \"�������¿Σ��˶�Ա������.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 38400)
	{
		Sleep(SLEEP_TIME);
	}//fourth in
	mciSendString(L"play \"�ϿΣ��ʵ���.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 38700)
		mciSendString(L"stop \"�ϿΣ��ʵ���.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 40800)
	{
		Sleep(SLEEP_TIME);
	}//fourth out
	mciSendString(L"play \"���Ľ��¿Σ�����������No.14.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 41100)
		mciSendString(L"stop \"���Ľ��¿Σ�����������No.14.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 41700)
	{
		Sleep(SLEEP_TIME);
	}//fifth in
	mciSendString(L"play \"�ϿΣ��ʵ���.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 42000)
		mciSendString(L"stop \"�ϿΣ��ʵ���.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 44100)
	{
		Sleep(SLEEP_TIME);
	}//fifth out
	mciSendString(L"play \"������¿Σ�����������No.9.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 44400)
		mciSendString(L"stop \"������¿Σ�����������No.9.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 46800)
	{
		Sleep(SLEEP_TIME);
	}//mid in
	mciSendString(L"play \"���ݿ�ʼ��������������������.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 47100)
		mciSendString(L"stop \"���ݿ�ʼ��������������������.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 50400)
	{
		Sleep(SLEEP_TIME);
	}//mid out
	mciSendString(L"play \"�����𴲣�La Bamba.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 50700)
		mciSendString(L"stop \"�����𴲣�La Bamba.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 51600)
	{
		Sleep(SLEEP_TIME);
	}//sixth in
	mciSendString(L"play \"�ϿΣ��ʵ���.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 51900)
		mciSendString(L"stop \"�ϿΣ��ʵ���.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 54000)
	{
		Sleep(SLEEP_TIME);
	}//sixth out
	mciSendString(L"play \"�������¿Σ��������ʿ������.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 54300)
		mciSendString(L"stop \"�������¿Σ��������ʿ������.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 54900)
	{
		Sleep(SLEEP_TIME);
	}//seventh in
	mciSendString(L"play \"�ϿΣ��ʵ���.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 55200)
		mciSendString(L"stop \"�ϿΣ��ʵ���.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 57300)
	{
		Sleep(SLEEP_TIME);
	}//seventh out
	mciSendString(L"play \"���߽��¿Σ�����������No.10.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 57600)
		mciSendString(L"stop \"���߽��¿Σ�����������No.10.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 57900)
	{
		Sleep(SLEEP_TIME);
	}//eighth in
	mciSendString(L"play \"�ϿΣ��ʵ���.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 58200)
		mciSendString(L"stop \"�ϿΣ��ʵ���.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 60300)
	{
		Sleep(SLEEP_TIME);
	}//eighth out
	mciSendString(L"play \"��ѧ¥�峡�����ֶ��ĳ��أ�Ƭ�Σ�.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 60600)
		mciSendString(L"stop \"��ѧ¥�峡�����ֶ��ĳ��أ�Ƭ�Σ�.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 68400)
	{
		Sleep(SLEEP_TIME);
	}//night first in
	mciSendString(L"play \"�ϿΣ��ʵ���.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 68700)
		mciSendString(L"stop \"�ϿΣ��ʵ���.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 73500)
	{
		Sleep(SLEEP_TIME);
	}//night first out
	mciSendString(L"play \"Shape of You-Ed Sheeran.320.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 73800)
		mciSendString(L"stop \"Shape of You-Ed Sheeran.320.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 74400)
	{
		Sleep(SLEEP_TIME);
	}//night second in
	mciSendString(L"play \"�ϿΣ��ʵ���.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 74700)
		mciSendString(L"stop \"�ϿΣ��ʵ���.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 79200)
	{
		Sleep(SLEEP_TIME);
	}//night second out
	mciSendString(L"play \"���޽���������������No.21.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 79210)
		mciSendString(L"stop \"���޽���������������No.21.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 79500)
	{
		Sleep(SLEEP_TIME);
	}//night second out
	mciSendString(L"play \"���޽�����������֮��.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 79510)
		mciSendString(L"stop \"���޽�����������֮��.mp3\"", NULL, NULL, NULL);
	
	while ((time(NULL) + 28800) % 86400 >= 79500)
	{
		Sleep(1000*SLEEP_TIME);
	}
	goto newday;
	
	return 0;
}