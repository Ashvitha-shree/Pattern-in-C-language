#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=n;i>0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            printf("  ");// double space
        }
        for(int k=0;k<=n-i;k++){
            printf("* ");
        }
       printf("\n");
    }

    return 0;
}
