/*编写一个统计空格、制表符与换行符个数的程序*/
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
		printf("空格符有%d个\n制表符有%d个\n换行符有%d个\n",s,t,n);

}
