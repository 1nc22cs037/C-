#include<stdio.h>
#include<conio.h>
int add(int a,int b);
int main()
{
	int sum,a,b;
	printf("enter a and b");
	scanf("%d%d",&a,&b);
	sum=add(a,b);
	printf("sum is %d",sum);
	getch();
}
int add (int a,int b)
{
	int sum;
	sum=a+b;
	return sum;
}
