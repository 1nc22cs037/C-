#include<stdio.h>
int main()
{
	int total=0,i,n;
	int marks[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<n;i++)
	{
		total=total+marks[i];
	}
	printf("%d",total);
}