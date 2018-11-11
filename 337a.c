#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    int p[m];
    for(i=0;i<m;i++)
        scanf("%d",&p[i]);
    for(i=0;i<m-1;i++)
        for(j=0;j<m-i-1;j++)
    {
        if(p[j]>p[j+1])
        {
            int t=p[j];
            p[j]=p[j+1];
            p[j+1]=t;
        }
    }
    int least=p[n-1]-p[0];
    for(i=1;i<=m-n;++i)
    {
        if(p[i+n-1]-p[i]<least)
            {
                least=p[i+n-1]-p[i];
            }

    }
    printf("%d",least);

}
