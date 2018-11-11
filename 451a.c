#include<stdio.h>
#include<stdlib.h>
int min(int x,int y)
{
    if(x<=y)
       return x;
     else
        return y;
}
int main()

{
    int n,m,moves;
    scanf("%d %d",&n,&m);
    moves=min(n,m);
    if(moves%2==0)
        printf("Malvika");
    else
        printf("Akshat");

}
