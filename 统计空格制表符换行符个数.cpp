#include<stdio.h>
main()
{
	int c,s;

	s=0;
	while((c = getchar())!=EOF)
		if (c=='\n'||c==' '||c=='\t')
			++s;
		printf("%d\n",s);
}