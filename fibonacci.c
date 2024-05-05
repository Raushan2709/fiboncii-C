#include<stdio.h>
int main()
{
    int a=1;
    int b=0;
    int n;
    printf("enter no :");
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<=n-1;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        printf("%d ",sum);

    }
    //printf("%d",sum);
    return 0;
    
}