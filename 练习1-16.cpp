/*
�޸Ĵ�ӡ��ı��еĳ����������main��ʹ֮���Դ�ӡ���ⳤ�ȵ������еĳ��ȣ��������ܶ�Ĵ�ӡ�ı�*/

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
#define MAXLINE 1000 /*����������������*/
int getline(char line[],int maxline);
void copy(char to[],char from[]);

//��ӡ���������
void main()
{
	int len;							//��ǰ�г���
	int max;							//��ǰ��г���
	char line[MAXLINE];					//��ǰ��
	char longest[MAXLINE];				//���ڱ��������
		 
	max=0;
	while((len = getline(line,MAXLINE)) > 0)
	{
		printf("%d:%s",len-1, line);		//���ÿһ��������ַ��������Լ��ַ���  len-1����Ϊ�س���Ҳ��һ���ַ�
		if(len > max){
			max=len;
			copy(longest,line);
		}
	if (max > 0)						//������������
		printf("%s",longest);
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
