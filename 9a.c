#include<stdio.h>
#include<string.h>
int check(char *s,char c)
{
    int i,cou=0;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==c)
            cou++;
        else if(s[i]!=c)
            cou=0;
        if(cou>=7)
            break;
    }

        return cou;
}
int main()
{
    int z,o;
    char s[101];
    scanf("%s",s);
    z=check(s,'0');
    o=check(s,'1');

    if(z>=7 || o>=7)
        printf("YES");
    else
        printf("NO");

    return 0;

}
