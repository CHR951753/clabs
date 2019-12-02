#include <stdio.h>
int main()
{
char s[1000];
char t[1000];
int m = 0;
int n =0;
while ((s[m] = getchar()) != ' ')
{
m++;
}
while (((t[n] = getchar()) != EOF) && (t[n] != '\n') && s[m] == ' ')
{
n++;
}
int i, j, k;
for (i=0;s[i] != '\0';i++){
    for (j=i,k=0;s[j]==t[k];j++,k++)
    ;
    if(k>0){
printf("%d\n", i+k-1);
return i;}
}
printf("wrong\n");
}
