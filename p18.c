#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=n;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            printf(" ");//single space
        }
        for(int k=0;k<n-i;k++){
            printf("*");// if we not give space we will get slanding triangle triangle
        }
       printf("\n");
    }

    return 0;
}

