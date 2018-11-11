#include<stdio.h>
int main()
{
    int n,i,t;
    scanf("%d",&n);
    int p[n];

    for(i=1;i<=n;i++)
    {
        scanf("%d",&t);
        p[t]=i;
    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",p[i]);
    }
    return 0;
}
