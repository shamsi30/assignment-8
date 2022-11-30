#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=6;i++)
    {
        char k = 'A';
        for(j=0;j<=12;j++)
        {
            if ( (j<=6-i) || (j>=6+i) ) {
                printf("%C",k);
                j<6?k++:k--;
            }
            else{
                printf(" ");
                if(j==6)
                    k--;
            }
        }
        printf("\n");
    }
    return 0;
}