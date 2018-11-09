#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int s[n][3];
    int a[3];
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&s[i][0],&s[i][1],&s[i][2]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+s[i][0];
    }
    if(sum==0)
        a[0]=0;
    else
        a[0]=1;
        sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+s[i][1];
    }
    if(sum==0)
        a[1]=0;
    else
        a[1]=1;
        sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+s[i][2];
    }
    if(sum==0)
        a[2]=0;
    else
        a[2]=1;
        sum=0;
    if(a[0]==0&&a[1]==0&&a[2]==0)
        printf("YES");
    else
        printf("NO");
}
