#include<stdio.h>
#include<string.h>
int main()
{
    char s[201];
    int t=1,i;
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
     if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
        i=i+2;
        if(t==0)
        {
            printf(" ");
        }
        }
        else
        {
        t=0;
        printf("%c",s[i]);
        }
    }
    return 0;

}
