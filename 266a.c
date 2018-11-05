#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,cou=0;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    for(i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
            cou++;
    }
    printf("%d",cou);
    return 0;
}
