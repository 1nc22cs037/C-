#include <stdio.h>
void fun(int n)
{
	if(n==0)
	{
		return;
	}
	else 
	{
		printf("%d",n);
		fun(n-1);
	}
}
int main()
{
	int n;
	fun(n);
}