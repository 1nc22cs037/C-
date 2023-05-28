#include<stdio.h>
int main()
{
	int a[20][20],m,n,i,j;
	printf("enter num of rows and col\n");
	scanf("%d%d",&m,&n);
	printf("Enter the %d array elements\n",m,n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	}
	
