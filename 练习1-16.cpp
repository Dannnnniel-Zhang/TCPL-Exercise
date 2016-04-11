/*
修改打印最长文本行的程序的主程序main，使之可以打印任意长度的输入行的长度，并尽可能多的打印文本*/

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
#define MAXLINE 1000 /*允许输入的最长行上限*/
int getline(char line[],int maxline);
void copy(char to[],char from[]);

//打印最长的输入行
void main()
{
	int len;							//当前行长度
	int max;							//当前最长行长度
	char line[MAXLINE];					//当前行
	char longest[MAXLINE];				//用于保存最长的行
		 
	max=0;
	while((len = getline(line,MAXLINE)) > 0)
	{
		printf("%d:%s",len-1, line);		//输出每一次输入的字符串长度以及字符串  len-1是因为回车键也算一个字符
		if(len > max){
			max=len;
			copy(longest,line);
		}
	if (max > 0)						//存在这样的行
		printf("%s",longest);
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
