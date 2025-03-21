#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=1;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf(" ");// same program try with one space and two space and no space
        }
        for(int k=0;k<n-i;k++){
            printf("* ");
        }
       printf("\n");
    }

    return 0;
}
