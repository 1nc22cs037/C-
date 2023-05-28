#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    if(m==1)
    {
        printf("monday");
    }
    else if(m==2)
    {
        printf("tuesday");
    }
    else if(m==3)
    {
        printf("wednesday");
    }
    else if(m==4)
    {
        printf("thursday");
    }
    else if(m==5)
    {
        printf("friday");
    }
    else if(m==6)
    {
        printf("saturday");
    }
    else if(m==7)
    {
        printf("sunday");
    }
    else
    {
        printf("invalid input");
    }
}