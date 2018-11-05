
#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char s[101];
    scanf("%s",s);
    strlwr(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y' )
            s[i]='.';
    }
    for(i=0;i<strlen(s);i++)
        if(s[i]!='.')
        {
            printf(".%c",s[i]);
        }
    return 0;
}
