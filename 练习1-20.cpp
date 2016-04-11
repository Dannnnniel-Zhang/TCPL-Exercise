/*
编写程序detab，将输入中的制表符替换成适当数目的空格，使空格充满到下一个制表符终止位的地方。
假设制表符终止位的位置是固定的，比如每个N列就会出现一个制表符终止位。N应该作为变量还是符号常量呢？
*/

/*
应该将n作为变量来设定。在运行时能自如修改。
*/
#include <stdio.h>
void replaceTab(char s[])
{
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='\t')
		{
			for(int j=0;j<7;j++)		//7为假定的一个tab包含多少space数
			putchar(' ');
		}
		else
			putchar(s[i]);
	}
}

void getline(char s[])
{
	int c,i;
	for(i=0;(c=getchar())!=EOF && c!='\n';++i)
		s[i] = c;
	if(c=='\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
}

void main()
{
	char s[1000];
	while(1){
	getline(s);
	replaceTab(s);
}
}

