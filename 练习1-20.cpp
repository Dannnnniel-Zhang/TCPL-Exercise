/*
��д����detab���������е��Ʊ���滻���ʵ���Ŀ�Ŀո�ʹ�ո��������һ���Ʊ����ֹλ�ĵط���
�����Ʊ����ֹλ��λ���ǹ̶��ģ�����ÿ��N�оͻ����һ���Ʊ����ֹλ��NӦ����Ϊ�������Ƿ��ų����أ�
*/

/*
Ӧ�ý�n��Ϊ�������趨��������ʱ�������޸ġ�
*/
#include <stdio.h>
void replaceTab(char s[])
{
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='\t')
		{
			for(int j=0;j<7;j++)		//7Ϊ�ٶ���һ��tab��������space��
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

