#include<stdio.h>
int main()
{
    int i,j;
    printf("PATTERN\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}