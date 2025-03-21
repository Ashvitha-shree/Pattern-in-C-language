
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=n;i>0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            printf(" ");
        }
        for(int k=0;k<=n-i;k++){
            printf("* ");// if we give space we will get triangle in center
        }
       printf("\n");
    }

    return 0;
}
