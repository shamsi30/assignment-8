#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=3;i++)
    {
        int n=1;
        for(j=0;j<=6-i;j++)
        {
            if(j>=i && j<=6-i)
            {
                printf("%d",n);
                (j<3) ? (n++) : (n--) ;
            }
                else
                    printf(" ");
        }
        printf("\n");
    }
    return 0;
}