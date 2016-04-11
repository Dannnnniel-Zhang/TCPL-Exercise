/*
修改打印最长文本行的程序的主程序main，使之可以打印任意长度的输入行的长度，并尽可能多的打印文本
Chris sidi thought last answer is too easy.So he complimented with another one that only modifies main() 
*/

/* 
基本框架：
while(还有未处理的行)
if(该行比已处理的最长行还要长)
	保存该行
	保存该行的长度
打印最长行
首先便携一个独立函数getline，他读取输入的下一行。至少getline函数应该在读到文件末尾时返回一个信号；
更为有用的设计是它能够在读入文本行时返回该行的长度，而在遇到文件结束符时返回0。
由于0不是有效的行长度，因此可以作为标识文件结束的返回值。每一行至少包括一个字符，只包含换行符的行，其长度为1.
当发现某个新读入的行比以前读入的最长行比以前读入的最长行还要长时，就要把该行保存起来。使用函数copy。
最后，我们需要在主函数main中控制getline和copy这两个函数
*/

#include<stdio.h>
#define MAXLINE 20 /*允许输入的最长行上限*/
int getline(char line[],int maxline);
void copy(char to[],char from[]);

//打印最长的输入行
void main()
{
	char line[MAXLINE];					
	char longest[MAXLINE];				
	char temp[MAXLINE];
	int len, max, prevmax, getmore;

	max = prevmax = getmore = 0;
	while((len = getline(line, MAXLINE)) > 0)
	{
	if(line[len-1] != '\n')				//用来分辨行与行
	{
		if(getmore == 0)				//getmore看做一把锁
			copy(temp, line);
		prevmax += len;
		if(max < prevmax)
			max = prevmax;
		getmore = 1;
	}
	else
	{
	if(getmore == 1)
	{
		if(max < prevmax + len)
		{
			max = prevmax + len;
			copy(longest, temp);
			longest[MAXLINE-2] = '\n';
		}
		getmore = 0;
	}

	else if(max < len)
	{
		max = len;
		copy(longest, line);
	}
	prevmax = 0;
	}
	}
	if(max > 0)
	{
		printf("%s",longest);
		printf("len = %d\n",max);
	}
}

//getline函数：将一行读入到S中并返回其长度
int getline(char s[], int lim)
{
	int c, i;
	for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';i++)
		s[i] = c;
	if (c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

//copy函数：将from复制到to；这里假定to足够大
void copy(char to[], char from[])
{
	int i=0;
	while((to[i] = from[i]) != '\0')
		++i;
}
