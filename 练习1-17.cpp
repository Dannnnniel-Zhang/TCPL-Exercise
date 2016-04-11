/*
编写一个程序，打印长度大于80个字符的所有行
*/
#include<stdio.h>
#define MAXLINE 1000
int getline(char line[], int lim);
void copy(char to[], char from[]);

main()
{
	int len;
	char line[MAXLINE], temp[MAXLINE];
	
	while((len = getline(line, MAXLINE)) > 0)
		if(len > 80)
			printf("%s",line);
		return 0;
}

int getline(char s[], int lim)
{
	int c, i;
	for(i=0;i<lim-1 && (c = getchar())!=EOF && c!='\n';++i)
		s[i] = c;
	if(c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char form[])
{
	int i;

	i = 0;
	while((to[i] = form[i]) != '\0')
		++i;
}

/*#include<stdio.h>
#define MINLENGTH 81
int readbuffer(char *buffer){
	size_t i = 0;
	int c;
	while(i < MINLENGTH){
	c = getchar();
	if(c == EOF)
		return -1;
	if(c == '\n')
		return 0;
	buffer[i++] = c; 
	}
	return 1;
}

int copyline(char *buffer){
	size_t i;
	int c;
	int status = 1;
	for(i=0;i<MINLENGTH;i++)
		putchar(buffer[i]);
	while(status == 1){
		c = getchar();
		if(c == EOF)
			status = -1;
		else if(c == '\n')
			status = 0;
		else 
			putchar(c);
	}
	putchar('\n');
	return status;
}

void main()
{
	char buffer[MINLENGTH];
	int status = 0;
	while(status != -1){
		status = readbuffer(buffer);
		if(status == 1)
			status = copyline(buffer);
	}

}
*/