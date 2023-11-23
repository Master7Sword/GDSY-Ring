#define _CRT_SECURE_NO_WARNINGS 1
#define SLEEP_TIME 1000
#include<stdio.h>
#include<easyx.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
#include<mmsystem.h>//Multi-Media Library
#pragma comment(lib,"Winmm.lib")//load Winmm.lib

//7  : 20～7  : 55 -> 26400 - 28500	早读
//8  : 00～8  : 40 -> 28800 - 31200	第一节	
//8  : 50～9  : 30 -> 31800 - 34200	第二节
//9  : 40～10 : 20 -> 34800 - 37200	第三节
//10 : 40～11 : 20 -> 38400 - 40800	第四节
//11 : 35～12 : 15 -> 41700 - 44100	第五节
//13 : 00～14 : 00 -> 46800 - 50400	午休
//14 : 20～15 : 00 -> 51600 - 54000	第六节
//15 : 15～15 : 55 -> 54900 - 57300	第七节
//16 : 05～16 : 45 -> 57900 - 60300	第八节
//19 : 00～20 : 25 -> 68400 - 73500	晚修第一节
//20 : 40～22 : 00 -> 74400 - 79200	晚修第二节

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
	mciSendString(L"open \"早读上课：舒伯特小夜曲.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"早读下课：玩具交响乐.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"上课：邮递马车.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"第一节下课：记忆（歌剧《猫》主题曲片段）.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"第二节下课：里斯本（片段）.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"第三节下课：运动员进行曲.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"第四节下课：匈牙利舞曲No.14.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"第五节下课：匈牙利舞曲No.9.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"第六节下课：《乡村骑士》插曲.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"第七节下课：匈牙利舞曲No.10.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"教学楼清场：康沃尔的晨曦（片段）.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"午休开始：《今生今世》主题曲.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"午休起床：La Bamba.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"晚修结束：匈牙利舞曲No.21.mp3\"", NULL, 0, 0);
	mciSendString(L"open \"晚修结束：西班牙之眼.mp3\"", NULL, 0, 0);
	//open 

newday:
	while ((time(NULL) + 28800) % 86400 < 26400)
	{
		Sleep(SLEEP_TIME);
	}//mourning read in
	mciSendString(L"play \"早读上课：舒伯特小夜曲.mp3\"", NULL,NULL,NULL);
	if ((time(NULL) + 28800) % 86400 > 26700)
		mciSendString(L"stop \"早读上课：舒伯特小夜曲.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 28500)
	{
		Sleep(SLEEP_TIME);
	}//mourning read out
	mciSendString(L"play \"早读下课：玩具交响乐.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 28700)
		mciSendString(L"stop \"早读下课：玩具交响乐.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 28800)
	{
		Sleep(SLEEP_TIME);
	}//first in
	mciSendString(L"play \"上课：邮递马车.mp3\"", NULL, NULL, NULL);

	if((time(NULL) + 28800) % 86400 > 29100)
		mciSendString(L"stop \"上课：邮递马车.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 31200)
	{
		Sleep(SLEEP_TIME);
	}//first out
	mciSendString(L"play \"第一节下课：记忆（歌剧《猫》主题曲片段）.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 31500)
		mciSendString(L"stop \"第一节下课：记忆（歌剧《猫》主题曲片段）.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 31800)
	{
		Sleep(SLEEP_TIME);
	}//second in
	mciSendString(L"play \"上课：邮递马车.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 32100)
		mciSendString(L"stop \"上课：邮递马车.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 34200)
	{
		Sleep(SLEEP_TIME);
	}//second out
	mciSendString(L"play \"第二节下课：里斯本（片段）.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 34500)
		mciSendString(L"stop \"第二节下课：里斯本（片段）.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 34800)
	{
		Sleep(SLEEP_TIME);
	}//third in
	mciSendString(L"play \"上课：邮递马车.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 35100)
		mciSendString(L"stop \"上课：邮递马车.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 37200)
	{
		Sleep(SLEEP_TIME);
	}//third out
	mciSendString(L"play \"第三节下课：运动员进行曲.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 37500)
		mciSendString(L"stop \"第三节下课：运动员进行曲.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 38400)
	{
		Sleep(SLEEP_TIME);
	}//fourth in
	mciSendString(L"play \"上课：邮递马车.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 38700)
		mciSendString(L"stop \"上课：邮递马车.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 40800)
	{
		Sleep(SLEEP_TIME);
	}//fourth out
	mciSendString(L"play \"第四节下课：匈牙利舞曲No.14.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 41100)
		mciSendString(L"stop \"第四节下课：匈牙利舞曲No.14.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 41700)
	{
		Sleep(SLEEP_TIME);
	}//fifth in
	mciSendString(L"play \"上课：邮递马车.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 42000)
		mciSendString(L"stop \"上课：邮递马车.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 44100)
	{
		Sleep(SLEEP_TIME);
	}//fifth out
	mciSendString(L"play \"第五节下课：匈牙利舞曲No.9.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 44400)
		mciSendString(L"stop \"第五节下课：匈牙利舞曲No.9.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 46800)
	{
		Sleep(SLEEP_TIME);
	}//mid in
	mciSendString(L"play \"午休开始：《今生今世》主题曲.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 47100)
		mciSendString(L"stop \"午休开始：《今生今世》主题曲.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 50400)
	{
		Sleep(SLEEP_TIME);
	}//mid out
	mciSendString(L"play \"午休起床：La Bamba.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 50700)
		mciSendString(L"stop \"午休起床：La Bamba.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 51600)
	{
		Sleep(SLEEP_TIME);
	}//sixth in
	mciSendString(L"play \"上课：邮递马车.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 51900)
		mciSendString(L"stop \"上课：邮递马车.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 54000)
	{
		Sleep(SLEEP_TIME);
	}//sixth out
	mciSendString(L"play \"第六节下课：《乡村骑士》插曲.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 54300)
		mciSendString(L"stop \"第六节下课：《乡村骑士》插曲.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 54900)
	{
		Sleep(SLEEP_TIME);
	}//seventh in
	mciSendString(L"play \"上课：邮递马车.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 55200)
		mciSendString(L"stop \"上课：邮递马车.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 57300)
	{
		Sleep(SLEEP_TIME);
	}//seventh out
	mciSendString(L"play \"第七节下课：匈牙利舞曲No.10.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 57600)
		mciSendString(L"stop \"第七节下课：匈牙利舞曲No.10.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 57900)
	{
		Sleep(SLEEP_TIME);
	}//eighth in
	mciSendString(L"play \"上课：邮递马车.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 58200)
		mciSendString(L"stop \"上课：邮递马车.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 60300)
	{
		Sleep(SLEEP_TIME);
	}//eighth out
	mciSendString(L"play \"教学楼清场：康沃尔的晨曦（片段）.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 60600)
		mciSendString(L"stop \"教学楼清场：康沃尔的晨曦（片段）.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 68400)
	{
		Sleep(SLEEP_TIME);
	}//night first in
	mciSendString(L"play \"上课：邮递马车.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 68700)
		mciSendString(L"stop \"上课：邮递马车.mp3\"", NULL, NULL, NULL);

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
	mciSendString(L"play \"上课：邮递马车.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 74700)
		mciSendString(L"stop \"上课：邮递马车.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 79200)
	{
		Sleep(SLEEP_TIME);
	}//night second out
	mciSendString(L"play \"晚修结束：匈牙利舞曲No.21.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 79210)
		mciSendString(L"stop \"晚修结束：匈牙利舞曲No.21.mp3\"", NULL, NULL, NULL);

	while ((time(NULL) + 28800) % 86400 < 79500)
	{
		Sleep(SLEEP_TIME);
	}//night second out
	mciSendString(L"play \"晚修结束：西班牙之眼.mp3\"", NULL, NULL, NULL);
	if ((time(NULL) + 28800) % 86400 > 79510)
		mciSendString(L"stop \"晚修结束：西班牙之眼.mp3\"", NULL, NULL, NULL);
	
	while ((time(NULL) + 28800) % 86400 >= 79500)
	{
		Sleep(1000*SLEEP_TIME);
	}
	goto newday;
	
	return 0;
}