#include <stdio.h>
void main()
{
int i;
int s=1;
i=getchar();
//scanf("%d",&i);
while(i>1){
	i--;
	s=(s+1)*2;
	}
printf("%d\n",s);
}


/*#include <stdio.h>
void main()
{
 
 int i, peach;
 
 peach=1;
 scanf("%d",&i);
 while(i>1)
 {
  i--;
  peach=(peach+1)*2;
 }
 printf("%d\n", peach);
}*/