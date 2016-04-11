/*
编写函数reverse(s)，将字符串s中的字符顺序颠倒过来。视同该函数编写一个程序，每次点到一个输入行中的字符顺序。
*/

//getline函数很有用！

#include <stdio.h>
#define MAX 1000
void reverse(char s[]){
	char tem;
	
	for(int m=0;s[m]!='\0';m++){}

	m--;

	for(int n=0;n<m-n;n++)
	{
		tem = s[n];
		s[n] = s[m-n];
		s[m-n] = tem;
	}
}

void getline(char s[])
{
	int c;
	for(int i=0;(c=getchar())!=EOF && c!='\n';++i)
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
	char s[MAX];

	getline(s);
	reverse(s);
	printf("%s\n",s);
	
}




