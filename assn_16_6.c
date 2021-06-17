#include<stdio.h>
int fun(int n)
{
	printf("%d\n",n);
	if(n==1)
	return 1;
	fun(n-1);
}

int  main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	fun(n);
}
