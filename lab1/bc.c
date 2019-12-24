#include <stdio.h>
int main()
{
    int c[17],i=0,n,j=0;
    scanf("%d",&n);
    getchar();
    while(n!=0)
    {
        c[i++]=n%2;
        n/=2;
    }
    for(i=0,i=0;i<17;i++)
    if(c[i]==1)j++;
    printf("%d\n",j);
}
