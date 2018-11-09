#include<stdio.h>
#include<string.h>
int main()
{
    int c=1;
    int i;
    char s[101];
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>=33 && s[i]<=126)
            if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            printf("YES");
            c=0;
            return 0;
        }
    }

        if(c)
        {
            printf("NO");
            return 0;
        }


    }
