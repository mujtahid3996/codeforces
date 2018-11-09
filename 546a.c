#include<stdio.h>
int main()
{
    long long int n;
    int w,k,s=0,i;
    scanf("%d %lld %d",&k,&n,&w);
    for(i=1;i<=w;i++)
        s=s+i*k;

        if(s-n>0)
        printf("%d",s-n);
        else
            printf("0");
}
