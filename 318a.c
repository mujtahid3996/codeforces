#include<stdio.h>
int main()
{
    long long int k,n;
    scanf("%lld %lld",&n,&k);
    if(k<=(n+1)/2)
    {
        printf("%lld",k*2-1);
    }
    else
    {
        printf("%lld",(k-(n+1)/2)*2);
    }
    return 0;
}
