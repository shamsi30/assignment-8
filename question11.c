#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=4;i++)
    {
        char k = 'A';
        for(j=0;j<=4+i;j++)
        {
            if(j>=4-i && j<=4+i) {
                printf("%C",k);
                (j<4)?(k++):(k--);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}