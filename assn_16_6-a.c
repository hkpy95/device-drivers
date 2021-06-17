//program for printing 1 to N using recursion.

#include<stdio.h>

void onetoN(int x)
{
	static int i;

	printf("%d\n",++i);
	if (x==1)
	{
		return;
	}
	else
	{
		onetoN(--x);
	}

}

int main()
{
	int N;
	printf("enter the max number: ");
	scanf("%d",&N);
	onetoN(N);
return 0;
}
