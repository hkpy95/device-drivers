#include<stdio.h>
#include<math.h>
int main()
{
	int a=2, b=1, x;
	x=(a++ && (!b) && b || ++a);
	printf("%d\n",x);

return 0;
}


