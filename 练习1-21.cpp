/*
��д����entab�����ո��滻Ϊ�����������Ʊ���Ϳո񣬵�Ҫ���ֵ���֮��ļ�����䡣�����Ʊ����ֹλ��λ������ϰ1-20��detab����������ͬ��
��ʹ��һ���Ʊ������һ���ո񶼿��Ե�����һ���Ʊ����ֹλʱ��ѡ����һ���滻�ַ��ȽϺã�
*/
/*
˼·��������������getline��entab������
		getline��������ȡ�����С�
		entab�������ո�ʼ��������4���ո����һ��tab��
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
