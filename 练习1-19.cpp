/*
��д����reverse(s)�����ַ���s�е��ַ�˳��ߵ���������ͬ�ú�����дһ������ÿ�ε㵽һ���������е��ַ�˳��
*/

//getline���������ã�

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




