#include <stdio.h>
int main()
{
    int n,i,flog=0;
    scanf("%d",&n);
    if(n==0||n==1)
    flog = 1;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0){
            flog=1;
            break;
        }
    }
}