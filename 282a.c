#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,x;
    scanf("%d",&n);
    x=0;
    char p[n][5];
    for(i=0; i<n; i++)
    {
        scanf("%s",p[i]);
    }
    for(i=0; i<n; i++)
    {
        if(strcasecmp("++X",p[i])==0 || strcasecmp(p[i],"X++")==0)
        {
            x=x+1;
        }
        if(strcasecmp("X--",p[i])==0 || strcasecmp(p[i],"--X")==0)
        {
            x=x-1;
        }
    }
    printf("%d",x);
    return 0;
}
