#include<stdio.h>


void dectoBin(int x)
{
	if(x==0)
	{
		return;
	}
	dectoBin(x/2);
	printf("%d",x%2);

}


int main()

{
	int dec;
	printf("enter the Dec number: ");
	scanf("%d",&dec);
	dectoBin(dec);

	return 0;
}
