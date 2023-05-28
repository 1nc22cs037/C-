#include<stdio.h>
int main()
{
	int arr[10],n,i;
	scanf("%d",&n);//5
	for(i=0;i<n;i++)//0 1 2 3 4
	{
		scanf("%d",&arr[i]);//1 2 3 4 5
	}
	for(i=0;i<n;i++)
	{
		printf("%d %d\n",arr+i,*(arr+i));//arr[i]
	}
}