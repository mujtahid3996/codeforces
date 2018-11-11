#include<stdio.h>
#include<string.h>
int main()
{
    int i,cou1=1,cou2=1,n;
    scanf("%d",&n);
    int p[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&p[i]);
        if(i>0)
        {
            if(p[i]>=p[i-1])
            {
                cou2++;
                //printf("c%d\n",cou2);
                if(cou2>cou1)
                    cou1=cou2;
            }
            else
            {
                cou2=1;
                //printf("%d",cou2);
            }
        }
    }
    printf("%d",cou1);
    return 0;
}
