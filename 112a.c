#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i;
    char str1[100];
    char str2[100];
    gets(str1);
    gets(str2);
    strlwr(str1);
    strlwr(str2);
    for(i=0; i<strlen(str1); i++)
    {
        if(str1[i]>str2[i])
        {
            printf("%d",1);
            return 0;
        }
        else if(str1[i]<str2[i])
        {
            printf("%d",-1);
            return 0;
        }
    }
    printf("%d",0);
    return 0;
}
