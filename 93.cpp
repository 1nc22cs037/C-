//parameter Mechanisms
//call by value
#include<stdio.h>
int add(int i,int j);
int main()
{
	int sum=0,i=10,j=20;
	sum=add(i,j);
	printf("sum is %d",sum);
}
int add(int i,int j)
{
	int sum;
	sum=i+j;
	return sum;
}