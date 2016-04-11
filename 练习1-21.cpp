/*
编写程序entab，将空格串替换为最少数量的制表符和空格，但要保持单词之间的间隔不变。假设制表符终止位的位置与练习1-20的detab程序的情况相同。
当使用一个制表符或者一个空格都可以到达下一个制表符终止位时，选用哪一种替换字符比较好？
*/
/*
思路：建立两个函数getline和entab函数。
		getline：用来获取输入行。
		entab：遇到空格开始计数，满4个空格输出一个tab。
*/

#include <stdio.h>
#define MAX 1000

void getline(char s[])
{
	char c;
	for(int i=0;i<MAX-1 && (c=getchar())!=EOF && c!='\n';++i)
	{
		s[i] = c;
	}
	if(c=='\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
}


entab(char s[])
{
	char c;
	int j = 0;			//spacenumber
	int flag = 0;
	for(int i=0;c=s[i];i++)
	{
		if(c == ' ')
		{
			flag = 0;
			j++;
			if(j == 4)
			{
				putchar('\t');
				j = 0;
				putchar('t');
			}
		}
	
		else if(c != ' ')
		{
			flag = 1;
			for(;j>0;j--)
				putchar(' ');
		}


		if(flag == 1)
		{
			putchar(c);
		}
	}
}


void main()
{
	char s[MAX];
	while(1){
		getline(s);
		entab(s);
	}
}
