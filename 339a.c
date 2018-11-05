#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char t;
    char s[100];
    scanf("%s",s);
    for(i=0;i<strlen(s)-1;i=i+2)
    for(j=0; j<strlen(s)-i-1; j=j+2)
    {
        if(s[j]>s[j+2] && s[j+2]!='\0')
        {
            t=s[j+2];
            s[j+2]=s[j];
            s[j]=t;
        }
    }
    printf("%s",s);

    return 0;
}
