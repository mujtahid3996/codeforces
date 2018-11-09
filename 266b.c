#include<stdio.h>
int main()
{
    int n,t,i,j;
    scanf("%d %d",&n,&t);
    char s[n];
    scanf("%s",s);
    for(i=0;i<t;i++)
        for(j=0;j<n;j=j+1)
    {
        if(s[j]=='B' && s[j+1]=='G')
        {
            char t=s[j];
            s[j]=s[j+1];
            s[j+1]=t;
            j=j+1;
        }
    }
    printf("%s",s);
}
