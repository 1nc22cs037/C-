#include <stdio.h>
int main()
{
	int a=2,b=2;
	printf("%d*%d=%d",a,b,a*b);
	b = b=1;
	printf("\n%d*%d=%d",a,b,a*b);
}