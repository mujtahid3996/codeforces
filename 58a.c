#include<stdio.h>
#include<string.h>
int main()
{
    int a=0,cou=0,i;
    char c[6]="hello";
    char s[101];
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==c[a])
        {
            a++;
            cou++;
        }
    }
    if(cou==5)
        printf("YES");
    else
        printf("NO");
}
