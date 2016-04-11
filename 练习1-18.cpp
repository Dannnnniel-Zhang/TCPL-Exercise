/*
编写一个程序，删除每个输入行末尾的空格及制表符，并删除完全是空格的行。
*/

#include<stdio.h>
#include<stdlib.h>

#define MAXQUEUE 1001

int advance(int pointer)
{
	if(pointer < MAXQUEUE-1)
		return pointer+1;
	else
		return 0;
}

int main()
{
	char blank[MAXQUEUE];
	int head, tail, nonspace, retval, c;

	retval = nonspace = head = tail = 0;
	while((c = getchar()) != EOF){
		if(c == '\n'){
			head = tail = 0;
			if(nonspace)
				putchar('\n');
			nonspace = 0;
		}
		else if(c == ' ' || c == '\t'){
			if(advance(head) == tail){
			putchar(blank[tail]);
			tail = advance(tail);
			nonspace = 1;
			retval = EXIT_FAILURE;
			}

			blank[head] = c;
			head = advance(head);
		}
		else{
			while(head != tail){
				putchar(blank[tail]);
				tail = advance(tail);
			}
			putchar(c);
			nonspace = 1;
		}
	}
	
	return retval;
}

