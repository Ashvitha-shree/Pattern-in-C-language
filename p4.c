#include<stdio.h>
int main(){

 int n,i,j ,fact=1;
 scanf("%d",&n);

 for (i=1;i<=n;i++)
 {
    fact*=i;


    }
    printf("Factorial of n is :%d",fact);


 return 0;
}
