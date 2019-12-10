#include <stdio.h>
#include <ctype.h>
#define BUFSIZE 100
char buf[BUFSIZE];
int bufp = 0;
int getch(void)
{
    return (bufp>0)?buf[--bufp] : getchar();
}
void ungetch(int c)
{
    if (bufp >=BUFSIZE)
     printf("ungetch:too many characters\n");
     else
        buf[bufp++] = c;
}
int getfloat(float *pf)
{
    int c, sign;
    float  power;
    while (isspace(c = getch()));
    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c);
        return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-') 
        c = getch();
    for (*pf = 0; isdigit(c); c = getch())
        *pf = *pf * 10 + (c - '0');
    *pf *= sign;
    if (c != EOF)
        ungetch(c);
    return c;
}
#define SIZE  10
int main()
{
    int i;
    float array[SIZE];

    for (i = 0; i < SIZE && getfloat(&array[i]) != EOF; ++i)
            printf("%.2f\n", array[i]);
    return 0;
}
