#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,cou=0;
    scanf("%d",&n);
    char p[1001];
    sprintf(p,"%d",n);
    for(i=0; i<strlen(p); i++)
    {
        if(p[i]=='4' || p[i]=='7')
        {
            cou++;
        }
        else
            cou--;
    }
    if(cou==strlen(p))
    {
        printf("YES");
    }
    else if(n%47==0)
    {
        printf("YES");
    }
    else if(n%4==0 || n%7==0)
    {
        printf("YES");
    }
    else
        printf("NO");
}
