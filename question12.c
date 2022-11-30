#include<stdio.h>
int main()
{
    int i,j;
    char k;
    for(i=0;i<=3;i++)
    {
        k='A';
        for(j=0;j<=6-i;j++)
        {
            if(j>=i && j<=6-i) {
                printf("%C",k);
                j<3?k++:k--;
            }
            else
                printf(" ");

        }
        printf("\n");
    }
    return 0;
}