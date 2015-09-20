#include <stdio.h>
#include <string.h>

void urlify(char* s, int len)
{
  int len_s  = strlen(s);
  int i, spaceCount=0, index;

  for (i=0;i<len;i++)
  {
    if (s[i] == ' ')
      spaceCount++;
  }
  printf("%d, %d\n",len_s,spaceCount);
  index = len+spaceCount*2;
  s[index--] = '\0';

  for (i=len-1; i>=0; i--)
  {
    if (s[i]==' ')
    {
      s[index] = '0';
      s[index-1] = '2';
      s[index-2] = '%';
      index -= 3;
    }else{
      s[index--] = s[i];
    }
  }
}

int main()
{
  char s[] = "Running is fun";
  int spaces = 2;
  int len_s = strlen(s);
  int len_us = len_s+spaces*2+1; //19
  int i;
  char us[19];
  
  for (i=0; i<len_s; i++)
  {
    us[i] = s[i];
  }

  urlify(us, len_s);
  printf("%s\n",us);
  
  return 0;
}