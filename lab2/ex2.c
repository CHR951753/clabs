#include<stdio.h>
int func(int n)
{
    int count=0;
    while(n>0)
    {
        count++;
        n&=(n-1);
    }
return count;
}
 int main(void)
{
	int n,num;
	printf("n");   
    n=getchar();
    num=func(n);
    printf("the numbefr of one is %d\n",num);
    //putchar(num);
}
