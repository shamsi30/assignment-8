#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=3;i++)
    {
        int n=1;
        for(j=0;j<=6;j++)
        {
            if( (j<=3-i) || (j>=3+i) ){
                printf("%d",n);
                (j<3) ? (n++) : (--n) ;
            }
            else{
                 printf(" ");
                 if(j==3)
                    n--;
            }
               
        }
        printf("\n");
    }
    return 0;
}