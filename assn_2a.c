#include<curses.h>
#include<stdio.h>
int main()

{
char password[8],ch;
int i;
printf("enter 8 digit password: ");
for(i=0;i<8;i++)
	
	{
		ch= getch();	       
		password[i]=ch;
		ch='*';
		printf("%c",ch);
	}
return 0;
}
