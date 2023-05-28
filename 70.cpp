#include<stdio.h>
int main()
{
	int total=0,i;
	int marks[4]={10,20,30,40};
	for(i=0;i<=4;i++)
	{
		total=total+marks[i];
	}
	printf("%d",total);
}