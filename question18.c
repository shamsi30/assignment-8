#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4+i;j++)
        {
            if(i==4 || j>=4-i || j>=4+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }    
    for(i=1;i<=4;i++)
    {
        for(j=0;j<=7-i+1;j++)
        {
            if(i==0 || j>=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}