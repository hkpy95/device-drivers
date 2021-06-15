#include<stdio.h>
int one_di(int x);
int main()
{
	int a,sum=0;
	printf("enter a number: ");
	scanf("%d",&a);
	sum=a;
	while(sum>9)
	{
		sum=one_di(sum);
	}	
	printf("sum is :%d \n",sum);
	return 0;

}

int one_di(int n)
{
	int r, sum=0;
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;

	}
	return sum;
}

