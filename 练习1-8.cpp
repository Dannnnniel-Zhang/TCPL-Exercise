/*��дһ��ͳ�ƿո��Ʊ���뻻�з������ĳ���*/
#include<stdio.h>
main()
{
	int c,s,t,n;
	s=0,t=0,n=0;
	while((c=getchar()) != EOF){
		if(c == ' ')
			++s;
		if(c == '\t')
			++t;
		if(c == '\n')
			++n;
	}
		printf("�ո����%d��\n�Ʊ����%d��\n���з���%d��\n",s,t,n);

}
