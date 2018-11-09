#include<stdio.h>
int main()
{
    int i,cou=0,n;
    scanf("%d",&n);
    int s[n][2];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&s[i][0] ,&s[i][1]);
    }
    for(i=0;i<n;i++)
    {
        if(s[i][1]-s[i][0]>=2)
            cou++;
    }
    printf("%d",cou);
}
