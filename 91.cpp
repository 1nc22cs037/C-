#include<stdio.h>
#include<conio.h>
int swap(int a,int b);
int main()
{
	int a,b;
	printf("enter a and b");
	scanf("%d%d",&a,&b);
	swap(a,b);
	getch();
}
int swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("after swaping a is %d b is %d\n",a,b);
}
