#include <stdio.h>
int main()
{
	int a=10,b=20;
	printf("a=%d,b=%d");
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d%d",a,b);
}
