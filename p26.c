#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the row");
    scanf("%d",&r);
    printf("Enter the column");
    scanf("%d",&c);
    int arr1[r][c],arr2[r][c];
    printf("Enter the arr1");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the arr2");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    int mult[r][c];
   for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
          mult[i][j]=0;
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            for(int k=0;k<c;k++)
            {
                mult[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    printf("Result\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\n",mult[i][j]);
        }

    }
    return 0;
}

