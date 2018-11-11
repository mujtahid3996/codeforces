#include<stdio.h>
int main()
{
    int a,b,c,t,i,j;
    int p[4];
    scanf("%d %d %d",&a,&b,&c);
    if(a==b==c && a==1)
    {
        printf("3");
    }
    else if(a==b==c)
    {
        printf("%d",a*b*c);
    }
    else if(a==b && c>a)
    {
        printf("%d",(a+b)*c);
    }
    else if(b==c && a>b)
    {
        printf("%d",(b+c)*a);
    }
    else if(a==c && b>c)
        printf("%d",a+c+b);
    else
    {
        p[0]=a+b*c;
        p[1]=a*(b+c);
        p[2]=a*b*c;
        p[3]=(a+b)*c;
        for(i=0; i<4-1; i++)
            for(j=0; j<4-i-1; j++)
            {
                if(p[j]>p[j+1])
                {
                    t=p[j+1];
                    p[j+1]=p[j];
                    p[j]=t;
                }
            }
        printf("%d",p[3]);
    }
}
