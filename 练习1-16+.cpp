/*
�޸Ĵ�ӡ��ı��еĳ����������main��ʹ֮���Դ�ӡ���ⳤ�ȵ������еĳ��ȣ��������ܶ�Ĵ�ӡ�ı�
Chris sidi thought last answer is too easy.So he complimented with another one that only modifies main() 
*/

/* 
������ܣ�
while(����δ�������)
if(���б��Ѵ������л�Ҫ��)
	�������
	������еĳ���
��ӡ���
���ȱ�Яһ����������getline������ȡ�������һ�С�����getline����Ӧ���ڶ����ļ�ĩβʱ����һ���źţ�
��Ϊ���õ���������ܹ��ڶ����ı���ʱ���ظ��еĳ��ȣ����������ļ�������ʱ����0��
����0������Ч���г��ȣ���˿�����Ϊ��ʶ�ļ������ķ���ֵ��ÿһ�����ٰ���һ���ַ���ֻ�������з����У��䳤��Ϊ1.
������ĳ���¶�����б���ǰ�������б���ǰ�������л�Ҫ��ʱ����Ҫ�Ѹ��б���������ʹ�ú���copy��
���������Ҫ��������main�п���getline��copy����������
*/

#include<stdio.h>
#define MAXLINE 20 /*����������������*/
int getline(char line[],int maxline);
void copy(char to[],char from[]);

//��ӡ���������
void main()
{
	char line[MAXLINE];					
	char longest[MAXLINE];				
	char temp[MAXLINE];
	int len, max, prevmax, getmore;

	max = prevmax = getmore = 0;
	while((len = getline(line, MAXLINE)) > 0)
	{
	if(line[len-1] != '\n')				//�����ֱ�������
	{
		if(getmore == 0)				//getmore����һ����
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

//getline��������һ�ж��뵽S�в������䳤��
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

//copy��������from���Ƶ�to������ٶ�to�㹻��
void copy(char to[], char from[])
{
	int i=0;
	while((to[i] = from[i]) != '\0')
		++i;
}
