#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s",s);
    char p[101];
    scanf("%s",p);
    if(strcmp(p,strrev(s)))
    {
        printf("NO");
    }
    else
        printf("YES");
    return 0;
}
