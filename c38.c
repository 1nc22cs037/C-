#include <stdio.h>
int main()
{
	int cp,sp;
	scanf("%d%d",&cp,&sp);
	if(cp>sp);
	{
		printf("Loss");
	}
	else if (cp < sp)
	{
		printf("Profit");
	}
	else
	{
		printf("No Loss No Profit");
	}
}