#include <stdio.h>
void reverse(char s[]);
int main(void)
{
    int i = 0;
    char s[100];
    while(s[i]!=EOF)
     {
       
       s[i]=getchar();
       if(s[i] == '\n')
          {break;}
          i++;
     }
     reverse(s);
     printf("%s", s);
     }
void reverse(char s[])
  {
      int m;
     static int c = 0;
 
     if (*s == '\0')
     {
         c--;
         return;
     }
     else 
     {
         c++;
         reverse(s + 1);
     }
     if (c > 0)
     {
         m = *s;
         *s = *(s - c);
          *(s - c) = m;
          c -= 2;
      }
  }
