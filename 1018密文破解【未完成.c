#include<stdio.h>
#include  <stdio.h>
#include<string.h>
void fun(char  a[])
{
  int  b[26], i, n,max;
  int bol=1;
   for (i=0; i<26; i++)
      b[i] = 0;
   n= strlen(a);
   for (i=0; i<n; i++)
      if (a[i] >='a' && a[i]<='z'){
         b[a[i] - 'a']++;}
      else  if (a[i] >='A' && a[i]<='Z'){
         b[a[i] -'A']++;}
         else bol=0;
   max = 0;
   for (i=26; i>0; i--)
     if (b[max] < b[i])
       max=i;
       if(bol!=0)
   printf("%c\n", (max + 'a'));
}
main( )
{
  char  a[200];
   scanf("%s", a);
   fun(a);
}

