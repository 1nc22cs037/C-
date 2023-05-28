#include<stdio.h>
int main()
{
	int a[20],n,i,j,temp;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter before sorting are\n");
	for(i=0;i<n;i++);
	printf("%d\t",a[i]);
	for(i=0;i<n-1;i++)
	for(j=0;j<n-1;j++)
	if(a[j]>a[j+1])
	{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
	printf("\nElements after sorting are\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}