#include <stdbool.h>
#include <string.h>

bool permutation(char* s1, char* s2)
{
  char letters[128];
  int i;
  int len1, len2;
  
  len1 = strlen(s1);
  len2 = strlen(s2);
  
  if (len1 != len2)
    return false;
    
  for (i=0; i<len1; i++)
  { 
    int val = s1[i] - 'a';
    letters[val] ++;
  }
  
  for (i=0; i<len2; i++)
  { 
    int val = s2[i] - 'a';
    letters[val] --;
    if (letters[val]<0)
      return false;
  }
  
  return true;
}