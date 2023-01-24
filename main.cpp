#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>
#include <string.h>
#include <windows.h>
#include <cstring>
#include <cassert>
using std::string;
using namespace std;
#define random(x) (rand() % x)
namespace clip
{
	bool CopyToBoard(const char *psz, const int len)
	{
		assert(psz != NULL);
		if (OpenClipboard(NULL))
		{
			EmptyClipboard();
			HGLOBAL clipbuf;
			char *buf;
			clipbuf = GlobalAlloc(GMEM_DDESHARE, len + 1);
			buf = (char *)GlobalLock(clipbuf);
			strcpy(buf, psz);
			GlobalUnlock(clipbuf);
			SetClipboardData(CF_TEXT, clipbuf);
			CloseClipboard();
			return true;
		}
		return false;
	}
#ifdef _GLIBCXX_STRING
	bool CopyToBoard(std::string s)
	{
		return CopyToBoard(s.c_str(), s.length());
	}
#endif
}
int main()
{
	system("mode con:cols=80 lines=20&color f0&&title 随机优美语句发送器&echo.&echo 	欢迎使用随机优美语句发送器。&echo 	---------------------------------------------------------&echo 	I	CCPIRA						I&echo 	I	中国计算机编程非正式研究协会			I&echo 	I							I&echo 	I						出品	I&echo 	---------------------------------------------------------&echo.");
	const int p = 30, u = 40;
	int nj;
	string space = "    ", end;
	string usubject[2][u + 6] = {{"你", "你妈", "你爸", "你妹", "你姐", "你弟", "你哥", "你爷爷", "你奶奶", "你姥姥",
								  "你姥爷", "你二爷爷", "你三爷爷", "你二奶奶", "你三奶奶", "你二姥爷", "你三姥爷", "你二姥姥", "你三姥姥", "你老姥爷",
								  "你老姥姥", "你祖宗", "你舅", "你叔", "你大伯", "你二舅", "你三舅", "你二叔", "你三叔", "你二伯",
								  "你三伯", "你舅妈", "你叔父", "你婶婶", "你姨妈", "你大姨", "你小姨", "你大姨夫", "你小姨夫", "你姑姑",
								  "他自己", "她自己", "它自己", "他", "她", "它"},
								 {"松鼠", "坚果", "印度尼西亚高级香蕉", "波斯风情地毯", "黑色高级车", "腿", "石油企业总裁", "宠物狗", "宠物猫", "GTX610疯牛病版",
								  "迎客松图案屏风", "管制刀具", "纳粹集中营的天窗", "土豆服务器", "德国进口奶粉", "单链RNA", "马戏团的CYKA熊", "高尔基体", "马桶", "姥姥家的大红色沙发",
								  "《一千零一夜》故事书", "一名炒股徒弟", "浪漫主义风格建筑", "希腊混合式大柱子", "黄色眼镜", "长到肉里去的手指甲", "炸药", "哈雷摩托", "公交车", "高级敞篷婴儿车",
								  "茅房", "茅草房", "每日邮报的八卦新闻", "绯闻作者", "真理报", "牙签棍棍", "左轮手枪", "装有危险化学品的试管", "核弹头", "无线网卡"}};
	string upredicate[2][20] = {{"学习杨永信精神，电击了", "杀了", "轰炸了", "吃了", "徒手撕开了", "性侵了", "强奸了", "踩死了", "创造了", "爱上了",
								 "找同伙暴揍了", "调戏了", "鄙视了", "吓唬了", "折叠了", "复制了", "吓死了", "笑死了", "嘲笑了", "评头论足了"},
								{"学习杨永信精神，电击着", "砍着", "轰炸着", "吃着", "徒手撕开着", "性侵着", "强奸着", "踩着", "创造着", "爱着",
								 "和同伙暴揍着", "调戏着", "鄙视着", "吓唬着", "折叠着", "复制着", "吓唬着", "检查着", "嘲笑着", "评头论足着"}};
	string adverbial[20] = {"用斯图卡轰炸机", "携带管制刀具", "手持满分数学卷子", "扛着姥姥家的大红色沙发", "使用八卦新闻", "用震耳欲聋的EDM舞曲", "用PSP", "摘下黄色眼镜", "仰面大笑两声，", "抢了个没毛的牙刷",
							"拿绝世名画", "打了个电话", "用隔夜意大利面", "借了个发芽的土豆", "随手捡了一百块钱", "掏出口袋里的公交卡", "大喊“键来！”", "用碎布", "喝着德国进口奶粉", "处于痴呆状态下"};
	string punchline[p] = {
		"，真是可笑！",
		"，这简直可以上UC头条了",
		"，荒唐至极！",
		"，人面蛇心！",
		"，可笑！",
		"，衣冠禽兽！",
		"，这是多么无私的精神！",
		"，呵呵",
		"，可歌可泣！",
		"，猪狗不如",
		"，斯文败类！",
		"，我操你妈的",
		"，跳梁小丑！",
		"，真是感动中国十大故事！",
		"，我潸然泪下",
		"，真是太帅了！",
		"，男默女泪……",
		"，绝了！",
		"，天无绝人之路！",
		"，震惊世界",
		"，跨时代的壮举！",
		"，这是多么伟大！",
		"，震撼我妈一整年",
		"，D区~~~",
		"（此典故已被收录到《你家史》）",
		"，令人作呕",
		"，我无FUCK说",
		"（选自《你家史》）",
		"，日了狗了",
		"…",
	};
	printf("\t请输入发送间隔（单位：毫秒；1000毫秒=1秒）");
	cin >> nj;
	printf("\t成功！间隔%d秒\n\n\t", nj);
	system("pause&cls&echo.");
	printf("\t开始发送……");
	Sleep(3000);
	system("cls&echo.&echo.&echo 		///信息发送进行中///");
	while (1)
	{
		srand(clock());
		int yntax = random(2);
		if (yntax == 0)
		{
			int syntax = random(3);
			if (syntax == 0)
			{
				int ssyntax = random(3);
				if (ssyntax == 0)
				{
					end = usubject[0][random(u)] + upredicate[0][random(20)] + usubject[0][random(u + 3)] + punchline[random(p)];
					// 人主+谓+宾（人主）+点睛之笔
				}
				else if (ssyntax == 1)
				{
					end = usubject[0][random(u)] + upredicate[0][random(20)] + usubject[1][random(u)] + punchline[random(p)];
					// 人主+谓+宾（物主）+点睛之笔
				}
				else if (ssyntax == 2)
				{
					end = usubject[0][random(u)] + upredicate[0][random(20)] + usubject[0][random(u + 3)] + "的" + usubject[1][random(u)] + punchline[random(p)];
					// 人主+谓+宾（人主+物主）+点睛之笔
				}
			}
			else if (syntax == 1)
			{
				int ssyntax = random(3);
				if (ssyntax == 0)
				{
					end = usubject[0][random(u)] + adverbial[random(20)] + upredicate[0][random(20)] + usubject[0][random(u + 3)] + punchline[random(p)];
					// 人主+状+谓+宾（人主）+点睛之笔
				}
				else if (ssyntax == 1)
				{
					end = usubject[0][random(u)] + adverbial[random(20)] + upredicate[0][random(20)] + usubject[1][random(u)] + punchline[random(p)];
					// 人主+状+谓+宾（物主）+点睛之笔
				}
				else if (ssyntax == 2)
				{
					end = usubject[0][random(u)] + adverbial[random(20)] + upredicate[0][random(20)] + usubject[0][random(u + 3)] + "的" + usubject[1][random(u)] + punchline[random(p)];
					// 人主+状+谓+宾（人主+物主）+点睛之笔
				}
			}
			else if (syntax == 2)
			{
				int ssyntax = random(7);
				if (ssyntax == 0)
				{
					end = usubject[0][random(u)] + "在" + upredicate[1][random(20)] + usubject[0][random(u + 3)] + "时，" + adverbial[random(20)] + upredicate[0][random(20)] + usubject[0][random(u + 6)] + punchline[random(p)];
					// 人主+"在"+从句（谓+宾（人主）+"时，"）+状+谓+宾（人主）+点睛之笔
				}
				else if (ssyntax == 1)
				{
					end = usubject[0][random(u)] + "在" + upredicate[1][random(20)] + usubject[1][random(u)] + "时，" + adverbial[random(20)] + upredicate[0][random(20)] + usubject[0][random(u + 6)] + punchline[random(p)];
					// 人主+"在"+从句（谓+宾（物主）+"时，"）+状+谓+宾（人主）+点睛之笔
				}
				else if (ssyntax == 2)
				{
					end = usubject[0][random(u)] + "在" + upredicate[1][random(20)] + usubject[0][random(u + 3)] + "时，" + adverbial[random(20)] + upredicate[0][random(20)] + usubject[1][random(u)] + punchline[random(p)];
					// 人主+"在"+从句（谓+宾（人主）+"时，"）+状+谓+宾（物主）+点睛之笔
				}
				else if (ssyntax == 3)
				{
					end = usubject[0][random(u)] + "在" + upredicate[1][random(20)] + usubject[1][random(u)] + "时，" + adverbial[random(20)] + upredicate[0][random(20)] + usubject[1][random(u)] + punchline[random(p)];
					// 人主+"在"+从句（谓+宾（物主）+"时，"）+状+谓+宾（物主）+点睛之笔
				}
				else if (ssyntax == 4)
				{
					end = usubject[0][random(u)] + "在" + upredicate[1][random(20)] + usubject[0][random(u + 3)] + "的" + usubject[1][random(u)] + "时，" + adverbial[random(20)] + upredicate[0][random(20)] + usubject[0][random(u + 6)] + punchline[random(p)];
					// 人主+"在"+从句（谓+宾（人主+物主）+"时，"）+状+谓+宾（人主）+点睛之笔
				}
				else if (ssyntax == 5)
				{
					end = usubject[0][random(u)] + "在" + upredicate[1][random(20)] + usubject[0][random(u + 3)] + "时，" + adverbial[random(20)] + upredicate[0][random(20)] + usubject[0][random(u + 6)] + "的" + usubject[1][random(u)] + punchline[random(p)];
					// 人主+"在"+从句（谓+宾（人主）+"时，"）+状+谓+宾（人主+物主）+点睛之笔
				}
				else if (ssyntax == 6)
				{
					end = usubject[0][random(u)] + "在" + upredicate[1][random(20)] + usubject[0][random(u + 3)] + "的" + usubject[1][random(u)] + "时，" + adverbial[random(20)] + upredicate[0][random(20)] + usubject[0][random(u + 6)] + "的" + usubject[1][random(u)] + punchline[random(p)];
					// 人主+"在"+从句（谓+宾（人主+物主）+"时，"）+状+谓+宾（人主+物主）+点睛之笔
				}
			}
		}
		if (yntax == 1)
		{
			int syntax = random(3);
			if (syntax == 0)
			{
				int ssyntax = random(3);
				if (ssyntax == 0)
				{
					end = usubject[0][random(u)] + "的" + usubject[1][random(u)] + upredicate[0][random(20)] + usubject[0][random(u + 3)] + punchline[random(p)];
					// 人主+物主+谓+宾（人主）+点睛之笔
				}
				else if (ssyntax == 1)
				{
					end = usubject[0][random(u)] + "的" + usubject[1][random(u)] + upredicate[0][random(20)] + usubject[1][random(u)] + punchline[random(p)];
					// 人主+物主+谓+宾（物主）+点睛之笔
				}
				else if (ssyntax == 2)
				{
					end = usubject[0][random(u)] + "的" + usubject[1][random(u)] + upredicate[0][random(20)] + usubject[0][random(u + 3)] + "的" + usubject[1][random(u)] + punchline[random(p)];
					// 人主+物主+谓+宾（人主+物主）+点睛之笔
				}
			}
			else if (syntax == 1)
			{
				int ssyntax = random(3);
				if (ssyntax == 0)
				{
					end = usubject[0][random(u)] + "的" + usubject[1][random(u)] + adverbial[random(20)] + upredicate[0][random(20)] + usubject[0][random(u + 3)] + punchline[random(p)];
					// 人主+物主+状+谓+宾（人主）+点睛之笔
				}
				else if (ssyntax == 1)
				{
					end = usubject[0][random(u)] + "的" + usubject[1][random(u)] + adverbial[random(20)] + upredicate[0][random(20)] + usubject[1][random(u)] + punchline[random(p)];
					// 人主+物主+状+谓+宾（物主）+点睛之笔
				}
				else if (ssyntax == 2)
				{
					end = usubject[0][random(u)] + "的" + usubject[1][random(u)] + adverbial[random(20)] + upredicate[0][random(20)] + usubject[0][random(u + 3)] + "的" + usubject[1][random(u)] + punchline[random(p)];
					// 人主+物主+状+谓+宾（人主+物主）+点睛之笔
				}
			}
			else if (syntax == 2)
			{
				int ssyntax = random(7);
				if (ssyntax == 0)
				{
					end = usubject[0][random(u)] + "的" + usubject[1][random(u)] + "在" + upredicate[1][random(20)] + usubject[0][random(u + 3)] + "时，" + adverbial[random(20)] + upredicate[0][random(20)] + usubject[0][random(u + 6)] + punchline[random(p)];
					// 人主+物主+"在"+从句（谓+宾（人主）+"时，"）+状+谓+宾（人主）+点睛之笔
				}
				else if (ssyntax == 1)
				{
					end = usubject[0][random(u)] + "的" + usubject[1][random(u)] + "在" + upredicate[1][random(20)] + usubject[1][random(u)] + "时，" + adverbial[random(20)] + upredicate[0][random(20)] + usubject[0][random(u + 6)] + punchline[random(p)];
					// 人主+物主+"在"+从句（谓+宾（物主）+"时，"）+状+谓+宾（人主）+点睛之笔
				}
				else if (ssyntax == 2)
				{
					end = usubject[0][random(u)] + "的" + usubject[1][random(u)] + "在" + upredicate[1][random(20)] + usubject[0][random(u + 3)] + "时，" + adverbial[random(20)] + upredicate[0][random(20)] + usubject[1][random(u)] + punchline[random(p)];
					// 人主+物主+"在"+从句（谓+宾（人主）+"时，"）+状+谓+宾（物主）+点睛之笔
				}
				else if (ssyntax == 3)
				{
					end = usubject[0][random(u)] + "的" + usubject[1][random(u)] + "在" + upredicate[1][random(20)] + usubject[1][random(u)] + "时，" + adverbial[random(20)] + upredicate[0][random(20)] + usubject[1][random(u)] + punchline[random(p)];
					// 人主+物主+"在"+从句（谓+宾（物主）+"时，"）+状+谓+宾（物主）+点睛之笔
				}
				else if (ssyntax == 4)
				{
					end = usubject[0][random(u)] + "的" + usubject[1][random(u)] + "在" + upredicate[1][random(20)] + usubject[0][random(u + 3)] + "的" + usubject[1][random(u)] + "时，" + adverbial[random(20)] + upredicate[0][random(20)] + usubject[0][random(u + 6)] + punchline[random(p)];
					// 人主+物主+"在"+从句（谓+宾（人主+物主）+"时，"）+状+谓+宾（人主）+点睛之笔
				}
				else if (ssyntax == 5)
				{
					end = usubject[0][random(u)] + "的" + usubject[1][random(u)] + "在" + upredicate[1][random(20)] + usubject[0][random(u + 3)] + "时，" + adverbial[random(20)] + upredicate[0][random(20)] + usubject[0][random(u + 6)] + "的" + usubject[1][random(u)] + punchline[random(p)];
					// 人主+物主+"在"+从句（谓+宾（人主）+"时，"）+状+谓+宾（人主+物主）+点睛之笔
				}
				else if (ssyntax == 6)
				{
					end = usubject[0][random(u)] + "的" + usubject[1][random(u)] + "在" + upredicate[1][random(20)] + usubject[0][random(u + 3)] + "的" + usubject[1][random(u)] + "时，" + adverbial[random(20)] + upredicate[0][random(20)] + usubject[0][random(u + 6)] + "的" + usubject[1][random(u)] + punchline[random(p)];
					// 人主+物主+"在"+从句（谓+宾（人主+物主）+"时，"）+状+谓+宾（人主+物主）+点睛之笔
				}
			}
		}
		clip::CopyToBoard(end.c_str(), end.length());
		printf("\n\n");
		keybd_event(17, 0, 0, 0);
		keybd_event(86, 0, 0, 0);
		keybd_event(17, 0, 2, 0);
		keybd_event(86, 0, 2, 0);
		keybd_event(13, 0, 0, 0);
		keybd_event(13, 0, 2, 0);
		Sleep(nj);
	}
	return 0;
}
